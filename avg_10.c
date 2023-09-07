/* program: average of 10 numbers:
lalith kumar ganchi
24/08/2023*/
#include<stdio.h>
void main(){
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,total;
	float avg;
	printf("Enter 10 numbers . \n");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
	total=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
	avg=total/10;
	printf("The average of 10 numbers is : %.2f",avg);
	
}
