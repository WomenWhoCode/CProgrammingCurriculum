#include <stdio.h>

int main()
{
    int i, j, N;

    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    /* Iterate over each row */
    for(i=1; i<=N; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                /* Print star for 1st, Nth row and column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}
