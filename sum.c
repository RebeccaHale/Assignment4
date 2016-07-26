/*Rebecca Hale Assignment 4 Part 1 Question 1*/
#include <stdio.h>

int main(){
	int len;
	printf("Enter the length of the array: ");
	scanf("%d", &len);
	int a[len];
	int i;
	for(i=0; i<len; i++){
		printf("\nEnter a number: ");
		scanf("%d", &a[i]);
	}/*find new numbers and puts them in a*/
	int two[len];/*creates new array*/
	int count = 0;
	int j;
	for(j=0; j<len; j++){
		count = count + a[j];
		two[j]=count;
	}/*puts sum in two*/
	for(j=0; j<len; j++){
		printf("\ntwo[%d] = %d", j, two[j]);
	}/*prints two*/
	return 0;
}
