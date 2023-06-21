#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int matrix[n][n];

    for(int i = 0; i<n; i++)
    {
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }
    for(int i = 1; i<n; i++)
    {
        for(int j = 1; j<n; j++)
        {
            // R x C
            matrix[i][j] = matrix[i-1][j] +matrix[i][j-1] ;
        }
    }

    printf("%d\n",matrix[n-1][n-1]);

    return 0;
}

