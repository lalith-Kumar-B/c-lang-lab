/*program:matrix addition
lalith kumar ganchi*/
#include<stdio.h>
int main(){
	int n,m;
	int a[n][m],b[n][m],c[n][m],i,j;
	printf("Enter the number of Rows and Columns of Matrix:\n");
	scanf("%d %d",&n,&m);
	printf("Enter the 1st Matrix(row-wise):\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the 2nd Matrix(row-wise):\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The matrix after addition is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}


