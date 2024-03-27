#include <stdio.h>
int main(){
	char x;
	printf("Enter the alphabet:");
	scanf("%ch",&x);
	switch (x){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("The alphabet is vowel");
		default:
			printf("The alphabet is consonant"):					
		 
	}
	return 0;
}
