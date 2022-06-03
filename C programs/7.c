#include<stdio.h>
void main()
{
	char str[20];
	int i,n,j=0;
	printf("Enter the string : \n");
    gets(str);
    n=strlen(str);
 
    for(i=0;i<n/2;i++)  
    {
    	if(str[i]==str[n-i-1])
    	j++;
 
 	}
 	if(j==i)
 	    printf("string is palindrome\n\n\n\n");
    else
        printf("string is not palindrome\n");
}