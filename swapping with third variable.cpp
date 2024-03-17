#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	c=b;
	b=a;
	a=c;
	printf("After swapping the value of a is %d and value of b is %d",a,b);
	return 0;
}

