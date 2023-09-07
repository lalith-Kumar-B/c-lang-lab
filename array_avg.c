/*program: avgerage with array:
lalith kumar ganchi
24/08/2023*/
#include<stdio.h>
void main(){
	int a[100],i,n,total=0;
	float avg;
	printf("Enter array size :");
	scanf("%d",&n);
	printf("Enter the array elements .\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	avg=total/n;
	printf("The average is :%.2f",avg);

	
}
