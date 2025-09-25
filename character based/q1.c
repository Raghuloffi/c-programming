#include<stdio.h>
int main()
{
	char b;
	printf("enter the characters");
	scanf("%c",&b);
	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
	printf("it is vowel");
	else
	printf("consonant");
	return 0;
}