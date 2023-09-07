/*program: linear search:
lalith kumar ganchi
07/09/2023*/
#include<stdio.h>
void main(){
	int n,a[n],i,flag=0,ele;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	printf("Enter the array elements : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			flag=1;
			break;
		}
	}
	if(flag){
		printf("The element %d is at array[%d] position .",ele,i+1);
	}
	else{
		printf("Element NOT found.");
	}

}
