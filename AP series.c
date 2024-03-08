#include <stdio.h>
int main(void){
	int n,s1,s2,s3;
	printf("Enter the term number to find:");
	scanf("%d",&n);
	s1=2+(n-1)*2;
	s2=2+(n-1)*3;
	s3=4+(n-1)*3;
	printf("The series of sequence i) is %d The series of the sequence ii) is %d The series of the sequence iii) is %d",s1,s2,s3);
return 0;
}
