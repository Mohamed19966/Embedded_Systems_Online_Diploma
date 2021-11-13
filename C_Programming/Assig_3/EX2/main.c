/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */



#include "stdio.h"
#include <stdlib.h>

int main(){

	float * arr;
	int i,n ;
	float average=0;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	arr = (float *)malloc(n * sizeof(float));
	for (i=0 ; i<n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);
		average+= arr[i];
	}
	printf("Average = %0.2f",(float)average/n);
	fflush(stdout);
	free(arr);
	return 1 ;
}


