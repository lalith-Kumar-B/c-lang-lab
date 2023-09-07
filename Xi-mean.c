/*program: Difference+=(xi-mean)^2:(each time value of Xi changes):standard deviation
lalith kumar ganchi
07/09/2023*/
#include<stdio.h>
#include<math.h>
void main(){
	int n;
	int a[n],i,total=0;
	double mean,dif,sd=0,std;
	printf("Enter array size :");
	scanf("%d",&n);
	printf("Enter the array elements .\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	mean=total/n;
	for(i=0;i<n;i++){
		dif=(a[i]-mean);
		sd+=dif*dif;
	}
	std=sqrt(sd/n);
	printf("The  (xi-mean)^2 is : %lf",sd);
    printf("The  standard deviation is : %lf",std); 	
}
