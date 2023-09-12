#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char s[40],ch;
	int i,n,vowels=0,cons=0;
	printf("Enter the string : ");
	scanf("%s",s);
	printf("The entered string is : %s\n",s);
//THis strlen is string type func ; that returns the length of the string.
	n=strlen(s);
	printf("The string length is : %d\n",n);
	for(i=0;i<n;i++){
		ch=s[i];
		if(isalpha(ch)){
		
			if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'){
				vowels++;
			}
			else{
				cons++;
			}
		}
	}
	printf("The number of vowels are : %d\n",vowels);
	printf("The number of consonants are : %d\n",cons);
	}
