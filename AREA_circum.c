//The area and circumference of a circle
#include<stdio.h>
int main(){
	float area,circum,r,pi=3.14;
	printf("A program to find Area and Circumference of Circle !\n\n");
	printf("Enter the radius of the circle ");
	scanf("%f",&r);
	area=pi*r*r;
	circum=2*pi*r;
	printf("The Area of the circle is = %.3f\n\n",area);
	printf("The Circumference of the Circle is = %.3f",circum);
	return 0;
}

