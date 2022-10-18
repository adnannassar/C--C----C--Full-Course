all: main kontrolls methods

main: main.c
	gcc -o main main.c

kontrolls: kontrolls.c
	gcc -o kontrolls kontrolls.c

methods: methods.c
	gcc -o methods methods.c	