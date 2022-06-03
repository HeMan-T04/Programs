#include<stdio.h>
int main()
{
    int M[10],j=9,k;
    printf("Enter elements of array \n");
    for(int i=0;i<10;i++)
    {
        printf("%d element: ",i+1);
        scanf("%d",&M[i]);
    }
    printf("Reversed array is :\n");
    for(int i=9;i>=0;i--)
    {
        printf("%d",M[i]);
    }
    printf("\n\n");
}
