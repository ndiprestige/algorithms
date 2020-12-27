#include <stdio.h>
#include "algorithms.h"
#include "helpers.h"

/*
Function that takes in an array, the first element and the length of the array
Returns a sorted array
*/
int* quickSort(int* arr, int first, int length){
	int last = length - 1;
	if(first < last){
		int pivot = partitionner(arr, first, last);
		quickSort(arr, first, pivot);
		quickSort(arr, pivot + 1, length);
	}
	return arr;
}