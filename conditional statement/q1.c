#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers :");
	scanf("%d %d",&a,&b);
	if(a>b)
	printf("greatest number %d",a);
	else
	printf("greatest number %d",b);
	return 0;
}