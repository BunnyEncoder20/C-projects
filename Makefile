
CC=clang

all: hello

hello: hello.c
	$(CC) -o hello hello.c && ./hello && hello

arr: arrays.c
	$(CC) -o arr arrays.c && ./arr && rm arr

strings: strings-pointers.c
	$(CC) -o strings strings-pointers.c && ./strings && rm strings

rev-str: reverse-string.c
	$(CC) -o rev-str reverse-string.c && ./rev-str && rm rev-str

arr-ptr: array-pointer.c
	$(CC) -o arr-ptr array-pointer.c && ./arr-ptr && rm arr-ptr

clean-1:
	rm hello

clean-2:
	rm arr-ptr
