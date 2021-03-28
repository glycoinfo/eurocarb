include ../../environment.txt
# above gives CC, CFLAGS, ..._INCLUDE_FLAGS, ..._LIB_FLAGS, ..._LIB

GLOBAL_DIR = ../../memops/global
GLOBAL_INCLUDE_FLAGS = -I$(GLOBAL_DIR)

GLOBAL_COLOR_OBJS = \
	$(GLOBAL_DIR)/color.o

GLOBAL_PY_UTIL_OBJS = \
	$(GLOBAL_DIR)/python_util.o \
	$(GLOBAL_DIR)/utility.o
 
GLOBAL_SORTS_OBJS = \
	$(GLOBAL_DIR)/sorts.o

GLOBAL_GEOMETRY_OBJS = \
	$(GLOBAL_DIR)/geometry.o

GLOBAL_LINALG_OBJS = \
	$(GLOBAL_DIR)/eigenvalue.o \
	$(GLOBAL_DIR)/linalg.o

GLOBAL_DRAWING_OBJS = \
	$(GLOBAL_DIR)/gl_handler.o \
	$(GLOBAL_DIR)/pdf_handler.o \
	$(GLOBAL_DIR)/ps_handler.o \
	$(GLOBAL_DIR)/store_handler.o \
	$(GLOBAL_DIR)/tk_handler.o \
	$(GLOBAL_DIR)/w32func.o

GLOBAL_PY_DRAWING_OBJS = \
	$(GLOBAL_DRAWING_OBJS) \
	$(GLOBAL_DIR)/py_draw_handler.o \
	$(GLOBAL_DIR)/py_gl_handler.o \
	$(GLOBAL_DIR)/py_pdf_handler.o \
	$(GLOBAL_DIR)/py_ps_handler.o \
	$(GLOBAL_DIR)/py_store_handler.o \
	$(GLOBAL_DIR)/py_tk_handler.o \
	$(GLOBAL_DIR)/py_tk_util.o

ALL_INCLUDE_FLAGS = $(GLOBAL_INCLUDE_FLAGS) $(PYTHON_INCLUDE_FLAGS) \
	$(X11_INCLUDE_FLAGS) \
	$(TCL_INCLUDE_FLAGS) $(TK_INCLUDE_FLAGS) $(GL_INCLUDE_FLAGS)

ALL_LIB_FLAGS = $(X11_LIB_FLAGS) $(TCL_LIB_FLAGS) $(TK_LIB_FLAGS) $(GL_LIB_FLAGS)

ALL_LIB = $(GL_LIB) $(TK_LIB) $(TCL_LIB) $(X11_LIB) $(MATH_LIB)

PY_STRUCT_ATOM_OBJS = \
	atom.o \
	bond.o \
	py_atom.o

PY_STRUCT_BOND_OBJS = \
	$(PY_STRUCT_ATOM_OBJS) \
	py_bond.o

PY_STRUCT_STRUCTURE_OBJS = \
	$(PY_STRUCT_BOND_OBJS) \
	structure.o \
	py_structure.o

PY_STRUCT_UTIL_OBJS = \
	struct_util.o \
	py_struct_util.o

all: StructAtom.so StructBond.so StructStructure.so StructUtil.so

StructAtom.so: $(PY_STRUCT_ATOM_OBJS) global_py_util_objects global_color_objects
	$(CC) $(SHARED_FLAGS) -o $@ $(GLOBAL_LIB_FLAGS) $(PYTHON_LIB_FLAGS) \
			$(PY_STRUCT_ATOM_OBJS) $(GLOBAL_PY_UTIL_OBJS) $(GLOBAL_COLOR_OBJS) $(PYTHON_LIB)

StructBond.so: $(PY_STRUCT_BOND_OBJS) global_py_util_objects global_color_objects
	$(CC) $(SHARED_FLAGS) -o $@ $(GLOBAL_LIB_FLAGS) $(PYTHON_LIB_FLAGS) \
			$(PY_STRUCT_BOND_OBJS) $(GLOBAL_PY_UTIL_OBJS) $(GLOBAL_COLOR_OBJS) $(PYTHON_LIB)

StructStructure.so: $(PY_STRUCT_STRUCTURE_OBJS) global_py_util_objects global_sorts_objects \
			global_geometry_objects global_py_drawing_objects global_color_objects
	$(CC) $(SHARED_FLAGS) -o $@ $(ALL_LIB_FLAGS) $(PYTHON_LIB_FLAGS) \
			$(PY_STRUCT_STRUCTURE_OBJS) $(GLOBAL_PY_UTIL_OBJS) $(GLOBAL_COLOR_OBJS) \
			$(GLOBAL_SORTS_OBJS) $(GLOBAL_GEOMETRY_OBJS) $(GLOBAL_PY_DRAWING_OBJS) $(PYTHON_LIB) $(ALL_LIB)

StructUtil.so: $(PY_STRUCT_UTIL_OBJS) global_py_util_objects global_geometry_objects global_linalg_objects
	$(CC) $(SHARED_FLAGS) -o $@ $(GLOBAL_LIB_FLAGS) $(PYTHON_LIB_FLAGS) \
			$(PY_STRUCT_UTIL_OBJS) $(GLOBAL_PY_UTIL_OBJS) \
			$(GLOBAL_GEOMETRY_OBJS) $(GLOBAL_LINALG_OBJS) $(PYTHON_LIB)

py_atom.o: py_atom.c
	$(CC) -c $(GLOBAL_INCLUDE_FLAGS) $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_bond.o: py_bond.c
	$(CC) -c $(GLOBAL_INCLUDE_FLAGS) $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_structure.o: py_structure.c
	$(CC) -c $(ALL_INCLUDE_FLAGS) $(CFLAGS) $<

py_struct_util.o: py_struct_util.c
	$(CC) -c $(GLOBAL_INCLUDE_FLAGS) $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

.c.o:;  $(CC) -c $(GLOBAL_INCLUDE_FLAGS) $(CFLAGS) $<
 
global_py_util_objects:
	cd $(GLOBAL_DIR); $(MAKE) py_util_objects

global_color_objects:
	cd $(GLOBAL_DIR); $(MAKE) color_objects

global_sorts_objects:
	cd $(GLOBAL_DIR); $(MAKE) sorts_objects

global_geometry_objects:
	cd $(GLOBAL_DIR); $(MAKE) geometry_objects

global_linalg_objects:
	cd $(GLOBAL_DIR); $(MAKE) linalg_objects

global_drawing_objects:
	cd $(GLOBAL_DIR); $(MAKE) drawing_objects

global_py_drawing_objects:
	cd $(GLOBAL_DIR); $(MAKE) py_drawing_objects

clean:
	rm *.o

realclean:
	rm *.o
	rm *.so

