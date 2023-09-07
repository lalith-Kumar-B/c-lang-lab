/*program: array input and output:
lalith kumar ganchi
24/08/2023*/
#include<stdio.h>
void main(){
	int a[100],i,n;
	printf("Enter array size :");
	scanf("%d",&n);
	printf("Enter the array elements .\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The entered array elements are.\n");
	for(i=0;i<n;i++){
	printf("%d\n",a[i]);
	}
	
}
