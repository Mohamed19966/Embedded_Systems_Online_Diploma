/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"

int main(){

	char text[1000];
	int length,i;
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);


	for(i=0;text[i]!='\0';i++){

		length++;
	}
	printf("Length of string: %d", length);
	fflush(stdout);
	return 1 ;
}


