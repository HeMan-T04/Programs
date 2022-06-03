#include<stdio.h>
int main()
{
    int M[10],s=0;
    float avg;
    printf("Enter Marks of \n");
    for(int i=0;i<10;i++)
    {
        printf("%d student: ",i+1);
        scanf("%d",&M[i]);
    }
    printf("Students having 100 marks are \n");
for(int i=0;i<10;i++)
{
	if (M[i]==100)
        {
        printf("Roll no.= %d\n",i+1);
        }
}
}
