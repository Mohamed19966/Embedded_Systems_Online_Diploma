/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"
#include <stdlib.h>

int main(){

	int *arr, *newArray , n,location, i, element;
	printf("enter no of elements: ");
	fflush(stdout);
	scanf("%d",&n);

	arr = (int*) malloc(n * sizeof(int));
	newArray = (int*) malloc((n+1) * sizeof(int));

	printf("please enter the elements of array\n");
	fflush(stdout);
	for (i=0 ; i<n ; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&location);

	for (i= 0; i < (n+1);i++){
		if(i>=(location-1)){
			newArray[i+1] = arr[i];
		}
		else{
			newArray[i] = arr[i];
		}

	}
	newArray[location-1] = element;
	for(i=0;i<(n+1);i++){
		printf("%d ",newArray[i]);
		fflush(stdout);
	}





	return 1 ;
}


