#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,j,r1,c1;
	printf("Enter the value of rows and cols\n");
	scanf("%d",&r1);
	scanf("%d",&c1);
	printf("Enter value of first matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
	}
	printf("matrix values are\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		printf("%d\t",a[i][j]);
	    }
		printf("\n");
	}
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		b[i][j]=a[j][i];
	}
	printf("Transpose of matrix is:\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
}