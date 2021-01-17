targets = main.bin
CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src task08/src/lib.c

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) task08/src/main.c -o dist/main.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
