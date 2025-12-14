
CC=clang

all: hello

hello: hello.c
	$(CC) -o hello hello.c && ./hello && hello

arr-ptr: arrays.c
	$(CC) -o arr arrays.c && ./arr && rm arr

strings: strings-pointers.c
	$(CC) -o strings strings-pointers.c && ./strings && rm strings

rev-str: reverse-string.c
	$(CC) -o rev-str reverse-string.c && ./rev-str && rm rev-str

clean-1:
	rm hello

clean-2:
	rm arr-ptr
