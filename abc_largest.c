/* lalith 
program:- write a program to find the largest of three numbers.
date:-17/08/2023
*/
#include<stdio.h>
#include<conio.h>
void main(){
/*	clrscr(); */
    system("cls");
	int a,b,c;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("The largest value Amoung the three is = %d",a);
	}
	else if(b>a&&b>c){
			printf("The largest value Amoung the three is = %d",b);
	} 
	else{
			printf("The largest value Amoung the three is = %d",c);
	}
	getch();
}
