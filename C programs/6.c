#include<stdio.h>
void main()
{
	int a[100],i,location=-1,item,n,j,t;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter element: ");
	scanf("%d",&a[i]);
	}
	printf("Enter the vaue of item to be searched\t");
	scanf("%d",&item);
	for(i=0;i<n;)
	{
		if(item==a[i])
		{
		    location=i+1;
		    break;	
		}
		else
		    i++;
	}
	if(location!=-1)
	printf("searched is successful and element is found at %d\n",location);
	else
	printf("search is unsuccesful\n");
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
    }
    printf("\nList in ascending order :\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}
    printf("\n\n\n\n");
}