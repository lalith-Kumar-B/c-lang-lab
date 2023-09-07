/*lalith
program:- write a program to grade student as pass or fail .
date:- 17/8/2023
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10],total=0,i,k=1;
	float per;
	for(i=0;i<6;i++){
		printf("Enter the marks of subject %d\n",k);
		scanf("%d",&a[i]);
		if(a[i]<0||a[i]>100){
			printf("Invalid input ERROR!");
			exit(0);
		}
		else{
			total=total+a[i];
			k=k+1;
		}
	}
	per=total/6.0;
	printf("\t Your percentage is = %.2f\n",per);
	if(a[0]>40&&a[1]>40&&a[2]>40&&a[3]&&a[4]&&a[5]>40&&per>=85){
		printf("\t Final result:PASS   Class:DISTINCTION");
	}
	else if(a[0]>40&&a[1]>40&&a[2]>40&&a[3]&&a[4]&&a[5]>40&&per>=70){
		printf("\t Final result:PASS   Class:1ST CLASS");
	}
	else if(a[0]>40&&a[1]>40&&a[2]>40&&a[3]&&a[4]&&a[5]>40&&per>=55){
		printf("\t Final result:PASS   Class:2ND CLASS");
	}
	else if(a[0]>40&&a[1]>40&&a[2]>40&&a[3]&&a[4]&&a[5]>40&&per>=40){
		printf("\t Final result:PASS   Class:3RD CLASS");
	}	
	else{
		printf("\t Final result : FAIL");
	}
	return 0;
}
