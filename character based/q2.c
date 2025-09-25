#include<stdio.h>
int main()
{
	char a;
	printf("enter the character:");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	printf("uppercase letter\n");
	else if(a>='a' && a<='z')
	printf("lowercase letter\n");
	else if(a>='0' && a<='9')
	printf("digits\n");
	else
	printf("symbols");
	return 0;
}