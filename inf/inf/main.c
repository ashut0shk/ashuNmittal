	//
	//  geeksforgeeks.c
	//  test
	//
	//  Created by Ashutosh K on 11/8/15.
	//  Copyright © 2015 Ashutosh K. All rights reserved.
	//
	//Condition 1 If the number have any other digits tahn the given reversible the it cannot be fancy
	//if all the digits are reversible, then replace all 6 with 9 and check if the number is same as input one, if yes then only ythe number is fancy, else not fancy.
#include "main.h"

int rotateBy180(const int input){
	int binput = input;
	
	int nDigit = 0;
	unsigned int i = 0;
	nDigit = floor(log10(abs(binput))) + 1;
	int * arrayp = (int *)malloc(sizeof(int)*nDigit);
	int * arrayq = (int *)malloc(sizeof(int)*nDigit);
	short int oneDig;
	do {
		oneDig = binput % 10;
		if(oneDig != 6 && oneDig != 9 && oneDig != 1 && oneDig != 0 && oneDig != 8){
			return false;
		}
		arrayp[i] = oneDig;
		if(oneDig == 6){
			arrayq[i] = 9;
		}else if(oneDig == 9){
			arrayq[i] = 6;
		}else{
			arrayq[i] = oneDig;
		}
		binput /= 10;
		++i;

	} while (binput > 0);
	for (i=0; i<nDigit-1; ++i) {
		if(arrayp[i] != arrayq[nDigit-1-i]){
			printf("%d--%d",arrayp[i],arrayq[i]);
			return false;
		}
	}

	return true;
}
int main(){
//		180 degree rotations of 6, 9, 1, 0 and 8 are 9, 6, 1, 0 and 8 respectively
	
	int input = 986;
	printf("program started with %d\n", rand());
	int revA = rotateBy180(input);
	char * str= (revA == 1)?" Fancy." : " Not Fancy.";
	printf("Given number is%s", str);
	printf("\n\nprogram ended with %d\n", rand());
	
	return EXIT_SUCCESS;
	
}
