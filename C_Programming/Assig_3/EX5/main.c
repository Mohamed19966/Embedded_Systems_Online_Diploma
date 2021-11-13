/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"
#include<stdlib.h>

int main(){

	int * arr , n ,i,element;

	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d",&n);

	arr = (int *)malloc(n * sizeof(int));
	printf("Enter the elements of array: \n");
	fflush(stdout);

	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched for: ");
	fflush(stdout);
	scanf("%d",&element);

	for(i=0;i<n;i++){
		if(arr[i]==element){
			printf("Number found at location: %d",i+1);
			fflush(stdout);
		}
	}
	if(i>n){
		printf("Not found");
		fflush(stdout);
	}






	return 1 ;
}


