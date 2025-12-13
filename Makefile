
CC=clang

all: hello

hello: hello.c
	$(CC) -o hello hello.c && ./hello

arr-ptr: arrays-pointers.c
	$(CC) -o arr-ptr arrays-pointers.c && ./arr-ptr
# test.o: test.c
# 	$(CC) -c test.c -o test.o

strings: strings.c
	$(CC) -o strings strings.c && ./strings

clean-1:
	rm hello

clean-2:
	rm arr-ptr
