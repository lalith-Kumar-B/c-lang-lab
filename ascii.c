/*program:ascii ==> character:
lalith kumar ganchi
24/08/2023*/
#include<stdio.h>
void main(){
	int i;
	printf("ASCII ==> character \n");
	for(i=-128;i<=127;i++){
		printf("%d ==> %c \n",i,i);
	}
}
