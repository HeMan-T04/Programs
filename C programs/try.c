#include<stdio.h>
#include<ctype.h>
void main()
{
	char s[];
	printf("STRING: ");
	scanf("%s",&s);
	printf("%d",isalpha(s));
}