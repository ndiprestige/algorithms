
output: main.o InsertionSort.o QuickSort.o Helpers.o
	gcc main.o InsertionSort.o QuickSort.o Helpers.o -o output
main.o: main.c
	gcc -c -Wall main.c
InsertionSort.o: InsertionSort.c
	gcc -c -Wall InsertionSort.c
QuickSort.o: QuickSort.c
	gcc -c -Wall QuickSort.c
Helpers.o: Helpers.c
	gcc -c -Wall Helpers.c
clean:
	rm *.o output