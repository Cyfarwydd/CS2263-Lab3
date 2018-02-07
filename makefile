Lab3: mystr.o main.o
	gcc -o Lab3 mystr.o main.o
mystr.o: mystr.c
	gcc -c mystr.c
main.o: main.c
	gcc -c main.c
