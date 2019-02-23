LIBACC=-L../../lib -lacc
CPP=cpp
CC=cc

LBITS := $(shell getconf LONG_BIT)

all:

	../../bin/acc foo.mc fooac.acc ; \
	${CC}  -o mypro foo.c fooac.c  ${LIBACC}  ;  \
        ./mypro  > output.real;
	



clean:
	rm -f *.o *.c *.real mypro;
