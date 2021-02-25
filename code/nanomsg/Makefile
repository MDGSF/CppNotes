sub_dirs=bus \
				 pair \
				 pipeline \
				 pubsub \
				 request_reply \
				 survey

sub_builds=$(addprefix build_,$(sub_dirs))
sub_cleans=$(addprefix clean_,$(sub_dirs))

all: $(sub_builds)

clean: $(sub_cleans)

build_%: %
	make -C $^

clean_%: %
	make -C $^ clean
