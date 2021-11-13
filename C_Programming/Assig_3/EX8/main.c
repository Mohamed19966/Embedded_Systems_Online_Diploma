/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"
#include <string.h>

int main(){
	char text[1000];
	char temp;
	int i,j,length;
	printf("Enter the string : ");
	fflush(stdout);
	gets(text);

	length= strlen(text);
	i = 0;
	j = length-1;
	while(i<j){
		temp = text[i];
		text[i] = text[j];
		text[j]= temp;
		i++;
		j--;
	}

	printf("Reverse string is: %s",text);
	fflush(stdout);
	return 1 ;
}


