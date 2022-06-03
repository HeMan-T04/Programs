#include <stdio.h>
void main()
{
    int i,j,r1, c1, r2, c2,a[10][10],b[10][10],c[10][10];
    printf("\nEnter the size of the 2-D matrix\n");
    scanf("%d", &r1);
    scanf("%d", &c1);
    printf("\nEnter the elements of the first 2-D matrix\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the size of the second 2-D matrix\n");
    scanf("%d", &r2);
    scanf("%d", &c2);
    printf("\nEnter the elements of the second 2-D matrix\n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2)
    {
        printf("\nMatrix addition not possible in this case");
    }

    else
    {

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nThe resulting 2-D matrix after matrix addition is\n\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", c[i][j]);
            }

            printf("\n");
        }
    }
}