#include <stdio.h>
#include "utils.h"
#include "helpers.h"
#include "algorithms.h"


int main(int argc, char const *argv[])
{
	int* randomArray = generateRandomArray(MAXN);
	//int* sortedArray = insterstionSort(randomArray, MAXN);
	for(int i = 0; i < MAXN; i++){
		printf("%d\t", randomArray[i]);
	}
	printf("\n%s\n", "********************************************");
	int* sortedArray = quickSort(randomArray, 0, MAXN);
	for(int i = 0; i < MAXN; i++){
		printf("%d\t", sortedArray[i]);
	}
	return 0;
}