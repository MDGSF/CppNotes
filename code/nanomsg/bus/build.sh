gcc -std=c99 bus.c \
  -I../libnanomsg/libnanomsg-1.1.5/include \
  -L../libnanomsg/libnanomsg-1.1.5/lib/linux/x86_64 \
  -lnanomsg \
  -o bus
