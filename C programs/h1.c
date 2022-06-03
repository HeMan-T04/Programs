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
        s=s+M[i];
    }
    avg=s/10;
    printf("Average marks of the 10 students are: %f\n\n",avg);
}
