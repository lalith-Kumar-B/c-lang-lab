//compound interest 
#include<stdio.h>
#include<math.h>
int main(){
	double ci, p,r;
	int t;
	printf("Enter the principal value ");
	scanf("%lf",&p);
	printf("Enter the time in year ");
	scanf("%d",&t);
	printf("Enter the rate ");
	scanf("%lf",&r);
	ci=p*(pow((1+(r/100)),t))-p;
	printf("The compound interest is = %lf",ci);
	return 0;
}
