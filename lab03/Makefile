targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	$(CC) $(C_OPTS) "Programm1/src/main.c" -o dist/main1.bin
	$(CC) $(C_OPTS) "Programm2/src/main.c" -o dist/main2.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
