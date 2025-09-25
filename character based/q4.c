#include<stdio.h>
int main()
{
	char d;
	printf("enter the character");
	scanf("%c",&d);
	if(d>='0' && d<='9')
	printf("it is digit");
	else
	printf("it is not digit");
	return 0;
}