#include<stdio.h>
void main()
{
int A[50],i,sum=0;
float avg;
printf("Enter the marks of the students:\n");
for(i=0;i<50;i++)
{
	scanf("%d",&A[i]);	
}
for(i=0;i<50;i++)
{
sum=sum+A[i];
}
avg=sum/50;
printf("Average of marks of the class is:%f\n",avg);
}