include environment.txt

all: compile

compile: global structure analysis clouds

global:
	cd memops/global && $(MAKE)

structure:
	cd ccp/structure && $(MAKE)

analysis:
	cd ccpnmr/analysis && $(MAKE)

clouds:
	cd ccpnmr/clouds && $(MAKE)

clean: global_clean structure_clean analysis_clean clouds_clean

global_clean:
	cd memops/global && $(MAKE) clean

structure_clean:
	cd ccp/structure && $(MAKE) clean

analysis_clean:
	cd ccpnmr/analysis && $(MAKE) clean

clouds_clean:
	cd ccpnmr/clouds && $(MAKE) clean

realclean: global_realclean structure_realclean analysis_realclean clouds_realclean

global_realclean:
	cd memops/global && $(MAKE) realclean

structure_realclean:
	cd ccp/structure && $(MAKE) realclean

analysis_realclean:
	cd ccpnmr/analysis && $(MAKE) realclean

clouds_realclean:
	cd ccpnmr/clouds && $(MAKE) realclean

links: memops_links ccp_links ccpnmr_links

memops_links:
	cd ../python/memops/c && $(LINK_LIBRARIES)

ccp_links:
	cd ../python/ccp/c && $(LINK_LIBRARIES)

ccpnmr_links:
	cd ../python/ccpnmr/c && $(LINK_LIBRARIES)

copies: memops_copies ccp_copies ccpnmr_copies

memops_copies:
	cd ../python/memops/c && $(COPY_LIBRARIES)

ccp_copies:
	cd ../python/ccp/c && $(COPY_LIBRARIES)

ccpnmr_copies:
	cd ../python/ccpnmr/c && $(COPY_LIBRARIES)

