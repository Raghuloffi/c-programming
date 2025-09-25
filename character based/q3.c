#include<stdio.h>
int main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
	if((c>='A' && c<='Z') || (c>='a' && c<='z'))
	printf("character is alphabet");
	else
	printf("character is not alphabet");
	return 0;
}