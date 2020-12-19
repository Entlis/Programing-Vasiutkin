targets = main.bin format
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep doxygen compile run

clean:
	rm -rf dist
prep:
	mkdir dist
doxygen:
	doxygen -g DoxyFile
compile:
	$(CC) $(C_OPTS) "task2_lab05/src/main.c" -o dist/main1.bin
	$(CC) $(C_OPTS) "task2_lab06/src/main.c" -o dist/main2.bin
	
run: clean prep doxygen compile
	./dist/main.bin
format: #TODO

tidy: # TODO
