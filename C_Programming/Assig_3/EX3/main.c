/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"
#include <stdlib.h>

int main(){
	float **arr, **trans;
	int i,j,r,c;

	printf("Enter rows and columns of matrix : ");
	fflush(stdout);
	scanf("%d%d", &r,&c);
	arr = (float**)malloc(r * sizeof(float*));
	trans = (float**)malloc(c * sizeof(float*));
	for(i=0; i <r;i++){
		arr[i]= (float*)malloc(c * sizeof(float));
	}
	for(i=0; i <c;i++){
		trans[i]= (float*)malloc(r * sizeof(float));
	}


	printf("Enter the elements of matrix: \n");
	fflush(stdout);

	for(i=0; i < r ; i++){
		for (j = 0 ;j < c ; j ++){
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f", &arr[i][j]);
		}

	}
	printf("Entered Matrix: \n");
	fflush(stdout);
	for(i=0; i < r ; i++){
		for (j = 0 ;j < c ; j ++){
			printf("%0.1f  ",arr[i][j]);
			fflush(stdout);

		}
		printf("\n");

	}

	for(i=0; i < r ; i++){
		for (j = 0 ;j < c ; j ++){
			trans[j][i] = arr[i][j];
		}
	}

	printf("Transpose of Matrix: \n");
	fflush(stdout);
	for(i=0; i < c ; i++){
		for (j = 0 ;j < r ; j ++){

			printf("%0.1f  ",trans[i][j]);
			fflush(stdout);

		}
		printf("\n");

	}




	return 1 ;
}


