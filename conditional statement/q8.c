#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	int n=a%10;
	if(n%3==0)
	printf("divisible by 3",n);
	else
	printf("not divisible by 3",n);
	return 0;
}