#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	char str[n];
	scanf("%[^\n]",str);
	int i,count=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

