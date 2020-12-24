#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpers.h"

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