/* program:input and output an array
20/8/2023
lalith-kumar
*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int a[7],i,k=1,j;
	for(i=0;i<5;i++){
		printf("Enter the element NO-%d: ",k);
		scanf("%d",&a[i]);	
		k++;
	}
	printf("The elements in the array are: ");
	for(j=0;j<5;j++){
		printf("%d ",a[j]);
	}
	return 0;
	getch();
}
