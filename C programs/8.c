#include<stdio.h>
void main()
{
	int a,b,*p,*q,s;
	printf("Enter 1st number: ");
	scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
	p=&a;
	q=&b;
	s=*p+*q;
	printf("Addition is %d\n",s);
	s=*p-*q;
	printf("Subtraction is %d\n",s);
	s=*p * *q;
	printf("Multiplication is %d\n",s);
	s=*p / *q;
	printf("Division is %d\n",s);
	s=*p % *q;
	printf("Modulus is %d\n\n\n",s);
}