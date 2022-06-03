#include <stdio.h>
int search(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
void main()
{
    int x,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++)
    {
        printf("Enter the %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element to be searched: ");
    scanf("%d",&x);
    int result = search(arr,n,x);
    if (result == -1)
    {
        printf("Element not found\n\n");
    }
    else
    {
        printf("Element found at index :%d\n\n",result);
    }
}