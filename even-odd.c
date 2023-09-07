/*lalith
program:- write a program to check if the given number is a even or odd.
date:- 17/8/2023
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	printf("Enter a number to check if even or not \n");
	scanf("%d",&n);
	if(n%2==0){
		printf("it is even");
	}
	else{
		printf("it is odd");
	}
}

