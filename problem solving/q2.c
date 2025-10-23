#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("sum : %d\n",sum);
	printf("Average : %d",sum/n);
	return 0;
	
}

