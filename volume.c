/*program: volume of water left in tub after a sphere of radius 'r' is immersed in it , initially the tub is filled to the brim.
lalith kumar ganchi
24/08/2023*/
#include<stdio.h>
#include<math.h>
#define PI 3.14

void main(){
	double l,b,h,tub_volume,s_volume,water_left,r;
	printf("Enter the length,bredth and height of the tub:\n");
	scanf("%lf%lf%lf",&l,&b,&h);
	printf("Enter the radius of the sphere :\n");
	scanf("%lf",&r);
	tub_volume=l*b*h;
	s_volume=(4.0/3.0)*PI*pow(r,3);
	water_left=tub_volume-s_volume;
	printf("The volume of water left is %.2f cubic units",water_left);
}
