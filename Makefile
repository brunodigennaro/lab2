CC	= gcc
INCLUDE	= -I.
CFLAGS	= -g -Wall
LDFLAGS	= -L. -L/usr/lib
LDLIBS	= -lc -lm

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

lab02: lab02.o
	$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f *.o
	rm -f main
