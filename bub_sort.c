/*program: bubble sort:
lalith kumar ganchi
07/09/2023*/
#include<stdio.h>
void main(){
	int n,i,j,temp;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Array after sorting(ascending order) is :\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
		
	}
}
