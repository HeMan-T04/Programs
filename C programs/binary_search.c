#include <stdio.h>
int binarysearch(int array[],int x, int low,int high){
    while(low <= high){
        int mid =low +(high -low) /2;
        if (array[mid] ==x)
        return mid;
        if (array[mid]<x)
        low =mid +1;
        else
        high =mid -1;
    }
    return -1;
}
void main(){
    int n,x;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int array[n];
    printf("Enter the sorted array \n");
    for(int i=0; i<n;i++)
    {
        printf("%d element: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&x);
    int result =binarysearch(array,x,0,n-1);
    if (result ==-1)
        printf("Not found \n\n");
    else
        printf("Element is found at index %d\n\n",result);
}