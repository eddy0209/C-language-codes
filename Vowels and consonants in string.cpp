#include <stdio.h>
int main(){
	char str[100];
	int i,c=0,k=0;
	printf("Enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='u'||str[i]=='U'){
			c++;
		}
		else{
			k++;
		}
	}
	printf("Total vowels is:%d",c);
	printf("\nTotal consonants is:%d",k);
	return 0;
}
