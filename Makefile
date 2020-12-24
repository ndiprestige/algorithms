
output: main.o InsertionSort.o generateRandomArray.o
	gcc main.o InsertionSort.o generateRandomArray.o -o output
main.o: main.c
	gcc -c -Wall main.c
InsertionSort.o: InsertionSort.c
	gcc -c -Wall InsertionSort.c
generateRandomArray.o: generateRandomArray.c
	gcc -c -Wall generateRandomArray.c
clean:
	rm *.o output