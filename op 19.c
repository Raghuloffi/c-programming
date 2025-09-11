#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("the greatest number %d",a);
	}
	else if(b>a && b>c)
	{ 
	printf("the greatest number %d",b);
	}else
	{
	printf("the greatest number %d",c);
	}return 0;
}