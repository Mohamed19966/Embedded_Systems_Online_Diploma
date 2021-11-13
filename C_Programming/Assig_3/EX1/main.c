/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"

int main(){
	float matrix_1[2][2];
	float matrix_2[2][2];
	float matrix_3[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix \n");
	fflush(stdout);

	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("Enter a%d%d  ", i+1,j+1);
			fflush(stdout);
			scanf("%f",&matrix_1[i][j]);

		}
	}
	printf("Enter the elements of 2nt matrix \n");
	fflush(stdout);
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("Enter b%d%d  ", i+1,j+1);
			fflush(stdout);
			scanf("%f",&matrix_2[i][j]);
		}
	}

	for(i=0;i<2;i++){
			for (j=0;j<2;j++){
				matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j] ;
			}
		}

	printf("Sum of Matrix: \n");
	fflush(stdout);

	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%0.1f  ",matrix_3[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}
	return 1;
}

