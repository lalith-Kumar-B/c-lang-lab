/*program:matrix multiplication
lalith kumar ganchi*/
#include<stdio.h>
int main(){
	int n;
	int a[n][n],b[n][n],c[n][n],i,j,k;
	printf("Enter the order of Matrix:\n");
	scanf("%d",&n);
	printf("Enter the 1st Matrix(row-wise):\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the 2nd Matrix(row-wise):\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("The matrix after Multiplication is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}


