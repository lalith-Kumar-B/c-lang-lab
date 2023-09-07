//find the exponent of a number
#include<stdio.h>
#include<math.h>
void main(){
	int base,p,result;
	printf("enter the base value \n");
	scanf("%d",&base);
	printf("enter the exponent value \n");
	scanf("%d",&p);
	result=pow(base,p);
	printf("The power is %d",result);
	
	
}
