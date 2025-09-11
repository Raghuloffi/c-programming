#include<stdio.h>
int main()
{
	int n,a;
	printf("enter 3digit number");
	scanf("%d",&n);
    a=(n/10)%10; 
    printf("the middle digit of three digit number%d\n",a);
    return 0;
}