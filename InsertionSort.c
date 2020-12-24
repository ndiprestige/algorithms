#include <stdio.h>
#include "algorithms.h"

int* insterstionSort(int* arr, int length){
	for(int i = 1; i < length; i++){
		int key = arr[i]; //assign the key to the second element
		int j = i-1; // the element that precedes the key
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1; 
		}
		arr[j+1] = key;
	}
	return arr;
}
