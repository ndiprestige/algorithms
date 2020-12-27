#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpers.h"

/*	
Function that generates a random array of a given length
Returns new generates random array
 */
int * generateRandomArray(int length){

	time_t t;
	/*Initialize the random number generator*/
	srand((unsigned) time(&t));
	/*Declare a point to the new array*/
	int* arr = (int*) malloc (sizeof(int)*length);
	/*Add random numbers into the array*/
	for(int i = 0; i < length; i++){
		arr[i] = rand()%100;
	}
	return arr;
}

/*	
Function that swaps two elements of array
 */
void swap( int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*	
Function that rearranges the array 
Returns the pivot's index
 */
int partitionner(int* arr, int first, int last){
	int pivot = arr[last];
	int index = first - 1;
	for(int i = first; i < last; i++){
		if(arr[i] <= pivot){
			index = index + 1;
			swap(&arr[index], &arr[i]);
		}
	}
	swap(&arr[index + 1], &arr[last]);
	return index + 1;
}