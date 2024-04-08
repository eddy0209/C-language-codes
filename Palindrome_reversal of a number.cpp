#include <stdio.h>
int main(){
	int n,s=0,r;
	printf("Enter the no:");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n%10;
	}
	printf("The Palindrome of the no is %d",s);
	return 0;
}
