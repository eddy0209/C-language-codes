#include <stdio.h>
int main(){
	char str[100];
	int i,length=0;
	printf("Enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	printf("The length of the string is:%d",length);
	return 0;
}
