stack: stack.o push.o pop.o display.o
	gcc -o main stack.o push.o pop.o display.o

stack.o: stack.c
	gcc -o stack.o -c stack.c

push.o: push.c
	gcc -o push.o -c push.c

pop.o: pop.c
	gcc -o pop.o -c pop.c

display.o: display.c
	gcc -o display.o -c display.c
