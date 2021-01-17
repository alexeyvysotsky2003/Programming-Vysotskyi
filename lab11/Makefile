targets = main.bin
CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src task03/src/lib.c task04/src/lib.c

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) task03/src/main.c -o dist/main03.bin
	$(CC) $(C_OPTS) task04/src/main.c -o dist/main04.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
