targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	$(CC) $(C_OPTS) lab05_task01/src/main.c -o dist/main5_1.bin
	$(CC) $(C_OPTS) lab05_task02/src/main.c -o dist/main5_2.bin
	$(CC) $(C_OPTS) lab05_task03/src/main.c -o dist/main5_3.bin
	$(CC) $(C_OPTS) lab05_task04/src/main.c -o dist/main5_4.bin
	$(CC) $(C_OPTS) lab05_task05/src/main.c -o dist/main5_5.bin
	$(CC) $(C_OPTS) lab06_task01/src/main.c -o dist/main6_1.bin
	$(CC) $(C_OPTS) lab06_task02/src/main.c -o dist/main6_2.bin
	$(CC) $(C_OPTS) lab06_task03/src/main.c -o dist/main6_3.bin
	$(CC) $(C_OPTS) lab06_task04/src/main.c -o dist/main6_4.bin
	$(CC) $(C_OPTS) lab06_task05/src/main.c -o dist/main6_5.bin
	$(CC) $(C_OPTS) lab06_task06/src/main.c -o dist/main6_6.bin
format: #TODO

tidy: # TODO
