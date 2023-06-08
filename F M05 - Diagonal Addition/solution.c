#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j, sum = 0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                sum += a[i][i];
            }
            else if (i + j == n - 1)
            {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}