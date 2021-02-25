CC_FLAGS=-Wall
CC=gcc

NANOMSGINC=-I../libnanomsg/libnanomsg-1.1.5/include
NANOMSGLIB=-L../libnanomsg/libnanomsg-1.1.5/lib/linux/x86_64 -lnanomsg

process=pipeline

all: $(process)

$(process): $(process).c
	$(CC) -std=c99 -o $@ $^ $(CC_FLAGS) $(NANOMSGINC) $(NANOMSGLIB)

clean:
	rm -rf $(process)

