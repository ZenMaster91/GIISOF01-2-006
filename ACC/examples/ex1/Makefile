
LIBACC=-L ../../lib -lacc

CC=gcc

all:
	../../bin/acc world.mc hello.acc ; \
	${CC}  -o mypro world.c hello.c  ${LIBACC}  ;  \
        ./mypro  > output.real;\
	diff output.real output.exp
clean:
	rm -f *.o *.c *.real mypro;