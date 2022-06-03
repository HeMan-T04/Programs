#include<stdio.h>
int fib(int );
int fact(int);
void main()
{
	int n,c,i,x;
	printf("enter the value of N :");
	scanf("%d",&n);
	printf("Fibonacci series : \n");
	for(c=0;c<n;c++)
	{
		i=fib(c);
		if(i<=n)
			printf("%d\n",fib(c));
		else
			break;
	}
    printf("enter the number to calculate factorial :");
	scanf("%d",&n);
	x=fact(n);
    printf("Factorial of %d is %d\n",n,x);
}
int fib(int j)
{
if (j==0)
return 0;
else if(j==1)
return 1;
else
return (fib(j-1)+fib(j-2));
}
int fact(int n)
{
    int b;
    if (n == 1)
        return 1;
    b = n * fact(n - 1);
    return b;
}