/*program: array input and reverse the array:
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
	printf("The array elements in reverse.\n");
	for(i=n-1;i>=0;i--){
	printf("%d\n",a[i]);
	}
	
}
