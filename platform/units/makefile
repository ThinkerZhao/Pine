
target=./lib/base64.o
CC=gcc

SRC_FILE+= \
	./src/base64.c

SRC_INCL+= \
	./include/base64.h

target:
	${CC} -c ${SRC_FILE}

clean:
	rm -f ./lib/*.o

.PHONY: \
	default clean