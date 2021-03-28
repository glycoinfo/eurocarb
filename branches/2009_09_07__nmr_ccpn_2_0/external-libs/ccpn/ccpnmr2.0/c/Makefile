MAKE = make
LINK_OBJS = linkSharedObjs

all: compile

compile: global structure

global:
	cd memops/global; $(MAKE)

structure:
	cd ccp/structure; $(MAKE)

clean: global_clean structure_clean

global_clean:
	cd memops/global; $(MAKE) clean

structure_clean:
	cd ccp/structure; $(MAKE) clean

links: memops_links ccp_links ccpnmr_links

memops_links:
	cd ../python/memops/c; sh $(LINK_OBJS)

ccp_links:
	cd ../python/ccp/c; sh $(LINK_OBJS)

ccpnmr_links:
	cd ../python/ccpnmr/c; sh $(LINK_OBJS)
