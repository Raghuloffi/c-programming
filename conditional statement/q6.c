#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("a is greatest number%d\n",a);
	else if(b>a && b>c)
	printf("b is greatest number%d\n",b);
	else
	printf("c is greatest %d\n",c);
	return 0;
}