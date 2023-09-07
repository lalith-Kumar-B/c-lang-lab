//leap year program
/*	lalith
	3/8/2023*/
#include<stdio.h>
int main(){
	int year,i,k=1;
	printf("Program to find the leap year ! \n\n");
	void leap_year(){
			printf("Enter the year ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0)){
		printf("The year %d is a leap year\n\n\n",year);
	}
	else{
		printf("The year %d is not a leap year\n\n\n",year);
	}
	}

	for(i=0;i<10;i++){
		printf("%d.",k);
		leap_year();
		k=k+1;
	}
	return 0;
}
