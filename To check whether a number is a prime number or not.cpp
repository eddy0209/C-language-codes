#include <stdio.h>
int main(){
	int n,i,c=0;
	printf("Enter the no: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n/i==0){
			c++;
		}	
	}
	if(c==0)
	printf("Therefore %d is a prime number",n);
	else
	printf("Therfor %d is not a prime number");
	return 0;
}
