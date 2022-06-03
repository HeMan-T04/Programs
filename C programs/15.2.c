#include<stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j, k;
    printf("\nEnter the size of the first 2-D matrix_\n");
    scanf("%d", &r1);
    scanf("%d", &c1);
    int a[r1][c1];
    printf("\nEnter the elements of the first 2-D matrix_\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the size of the second 2-D matrix_\n");
    scanf("%d", &r2);
    scanf("%d", &c2);
    int b[r2][c2];
    printf("\nEnter the elements of the second 2-D matrix_\n");

    for (i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("\nMatrix multiplication not possible in this case!");
    }

    else
    {
        int c[r1][c2];

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;

                for (k = 0; k < c1; k++)
                {

                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nThe matrix multiplication is_\n\n");

        for (i = 0; i < r1; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }

            printf("\n");
        }
    }
}