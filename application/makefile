
target:=application
CC=gcc

SRC_FILE+= \
	./src/application.c

SRC_INCL+= \
	./include/application.h

${target}/%.o:${SRC_FILE}
	${CC} -c $<

clean:
	rm -f ./lib/*.o

.PHONY: default clean

