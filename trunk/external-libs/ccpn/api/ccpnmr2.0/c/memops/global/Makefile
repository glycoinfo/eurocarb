include ../../environment.txt
# above gives CC, CFLAGS, GL_FLAG, ..._INCLUDE_FLAGS, ..._LIB_FLAGS, ..._LIB

OUT = -o \

UTIL_OBJS = \
	utility.o

PY_UTIL_OBJS = \
	$(UTIL_OBJS) \
	python_util.o

COLOR_OBJS = \
	color.o

SORTS_OBJS = \
	sorts.o

LINALG_OBJS = \
	eigenvalue.o \
	linalg.o

GEOMETRY_OBJS = \
	geometry.o

PY_MEM_CACHE_OBJS = \
	$(PY_UTIL_OBJS) \
	hash_list.o \
	hash_table.o \
	mem_cache.o \
	mutex.o \
	py_mem_cache.o

PY_BLOCK_FILE_OBJS = \
	$(PY_MEM_CACHE_OBJS) \
	block_file.o \
	shape_file.o \
	int_array.o \
	py_block_file.o \
	py_shape_file.o

CONTOUR_OBJS = \
	contourer.o \
	list.o

PY_GL_HANDLER_OBJS = \
	$(PY_UTIL_OBJS) \
	gl_handler.o \
	py_gl_handler.o \
	py_tk_util.o \
	w32func.o

PY_TK_HANDLER_OBJS = \
	$(PY_UTIL_OBJS) \
	$(COLOR_OBJS) \
	tk_handler.o \
	py_tk_handler.o \
	py_tk_util.o \
	w32func.o

PY_PDF_HANDLER_OBJS = \
	$(PY_UTIL_OBJS) \
	pdf_handler.o \
	py_pdf_handler.o

PY_PS_HANDLER_OBJS = \
	$(PY_UTIL_OBJS) \
	ps_handler.o \
	py_ps_handler.o

PY_STORE_HANDLER_OBJS = \
	$(PY_UTIL_OBJS) \
	store_handler.o \
	py_store_handler.o

PY_STORE_FILE_OBJS = \
	$(PY_UTIL_OBJS) \
	store_file.o \
	py_store_file.o

PY_SHAPE_FILE_OBJS = \
	$(PY_UTIL_OBJS) \
	shape_file.o \
	hash_list.o \
	hash_table.o \
	int_array.o \
	py_shape_file.o

DRAWING_OBJS = \
	$(COLOR_OBJS) \
	gl_handler.o \
	pdf_handler.o \
	ps_handler.o \
	store_handler.o \
	tk_handler.o

PY_DRAWING_OBJS = \
	$(DRAWING_OBJS) \
	$(PY_UTIL_OBJS) \
	py_draw_handler.o \
	py_gl_handler.o \
	py_pdf_handler.o \
	py_ps_handler.o \
	py_store_handler.o \
	py_tk_handler.o \
	py_tk_util.o

RANDOM_OBJS = \
	random.o

DIAG_OBJS = \
	diag_dbl.o

FIT_OBJS = \
	fit.o \
	gamma.o \
	gauss_jordan.o \
	line_fit.o \
	nonlinear_model.o \
	random.o

PY_FIT_OBJS = \
	$(FIT_OBJS) \
	$(PY_UTIL_OBJS) \
	py_fit.o

TCLTK_INCLUDE_FLAGS = $(PYTHON_INCLUDE_FLAGS) $(X11_INCLUDE_FLAGS) \
	$(TCL_INCLUDE_FLAGS) $(TK_INCLUDE_FLAGS)

TCLTK_LIB_FLAGS = $(X11_LIB_FLAGS) $(TCL_LIB_FLAGS) $(TK_LIB_FLAGS)

TCLTK_LIB = $(TK_LIB) $(TCL_LIB) $(X11_LIB) $(MATH_LIB)

ALL_INCLUDE_FLAGS = $(PYTHON_INCLUDE_FLAGS) $(X11_INCLUDE_FLAGS) \
	$(TCL_INCLUDE_FLAGS) $(TK_INCLUDE_FLAGS) $(GL_INCLUDE_FLAGS)

ALL_LIB_FLAGS = $(X11_LIB_FLAGS) $(TCL_LIB_FLAGS) $(TK_LIB_FLAGS) $(GL_LIB_FLAGS)

ALL_LIB = $(GL_LIB) $(TK_LIB) $(TCL_LIB) $(X11_LIB) $(MATH_LIB)

all: BlockFile.so GlHandler.so MemCache.so PdfHandler.so PsHandler.so FitMethod.so TkHandler.so StoreFile.so StoreHandler.so ShapeFile.so

util_objects: $(UTIL_OBJS)
py_util_objects: $(PY_UTIL_OBJS)
color_objects: $(COLOR_OBJS)
sorts_objects: $(SORTS_OBJS)
linalg_objects: $(LINALG_OBJS)
geometry_objects: $(GEOMETRY_OBJS)
py_mem_cache_objects: $(PY_MEM_CACHE_OBJS)
py_block_file_objects: $(PY_BLOCK_FILE_OBJS)
py_store_file_objects: $(PY_STORE_FILE_OBJS)
py_shape_file_objects: $(PY_SHAPE_FILE_OBJS)
contour_objects: $(CONTOUR_OBJS)
drawing_objects: $(DRAWING_OBJS)
py_drawing_objects: $(PY_DRAWING_OBJS)
random_objects: $(RANDOM_OBJS)
diag_objects: $(DIAG_OBJS)
py_fit_objects: $(PY_FIT_OBJS)

BlockFile.so: $(PY_BLOCK_FILE_OBJS)
	$(CC) $(SHARED_FLAGS) $(OUT) $@ $(PY_BLOCK_FILE_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

GlHandler.so: $(PY_GL_HANDLER_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ $(ALL_LIB_FLAGS) \
		$(PY_GL_HANDLER_OBJS) $(ALL_LIB) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

TkHandler.so: $(PY_TK_HANDLER_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ $(TK_LIB_FLAGS) $(X11_LIB_FLAGS) \
		$(PY_TK_HANDLER_OBJS) $(TK_LIB) $(X11_LIB) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

PdfHandler.so: $(PY_PDF_HANDLER_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ \
		$(PY_PDF_HANDLER_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

PsHandler.so: $(PY_PS_HANDLER_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ \
		$(PY_PS_HANDLER_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

StoreFile.so: $(PY_STORE_FILE_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ \
		$(PY_STORE_FILE_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

StoreHandler.so: $(PY_STORE_HANDLER_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ \
		$(PY_STORE_HANDLER_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

ShapeFile.so: $(PY_SHAPE_FILE_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ \
		$(PY_SHAPE_FILE_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

MemCache.so: $(PY_MEM_CACHE_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ $(PY_MEM_CACHE_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

FitMethod.so: $(PY_FIT_OBJS)
	$(CC) $(SHARED_FLAGS) -o $@ $(PY_FIT_OBJS) $(PYTHON_LIB_FLAGS) $(PYTHON_LIB)

py_mem_cache.o: py_mem_cache.c 
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_block_file.o: py_block_file.c 
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_store_file.o: py_store_file.c 
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_shape_file.o: py_shape_file.c 
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_fit.o: py_fit.c 
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

python_util.o: python_util.c 
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_draw_handler.o: py_draw_handler.c
	$(CC) -c $(IGNORE_GL_FLAG) $(ALL_INCLUDE_FLAGS) $(CFLAGS) $<

py_gl_handler.o: py_gl_handler.c
	$(CC) -c $(IGNORE_GL_FLAG) $(GL_FLAG) $(ALL_INCLUDE_FLAGS) $(CFLAGS) $<

gl_handler.o: gl_handler.c
	$(CC) -c $(IGNORE_GL_FLAG) $(GLUT_FLAG) $(ALL_INCLUDE_FLAGS) $(CFLAGS) $<

py_tk_handler.o: py_tk_handler.c
	$(CC) -c $(TCLTK_INCLUDE_FLAGS) $(CFLAGS) $<

tk_handler.o: tk_handler.c
	$(CC) -c $(TCLTK_INCLUDE_FLAGS) $(CFLAGS) $<

py_tk_util.o: py_tk_util.c
	$(CC) -c $(TCLTK_INCLUDE_FLAGS) $(CFLAGS) $<

py_ps_handler.o: py_ps_handler.c
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_store_handler.o: py_store_handler.c
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

py_pdf_handler.o: py_pdf_handler.c
	$(CC) -c $(PYTHON_INCLUDE_FLAGS) $(CFLAGS) $<

.c.o:;  $(CC) -c $(CFLAGS) $<
 
clean:
	rm *.o
 
realclean:
	rm *.o
	rm *.so

