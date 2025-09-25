#include<stdio.h>
int main()
{
	char a,b;
	printf("enter the characters");
	scanf("%c %c",&a,&b);
	if(a==b)
	printf("it is equal",a);
	else
	printf("it is not equal",b);
	return 0;
}