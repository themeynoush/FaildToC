all: main.o functions.o
	gcc main.o functions.o -o program

main.o: main.c
	gcc -c main.c

functions.o: functions.c functions.h
	gcc -c functions.c

clean:
	rm -f *.o functions