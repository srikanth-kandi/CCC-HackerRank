// Solution may not be correct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define MAX 100

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int t, n, i, j, k, l, m, min_cost, cost, cost1, cost2, cost3, cost4;
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], d[MAX][MAX];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; i++)
        {
            b[i][0] = a[i][0];
            c[i][0] = a[i][0];
            d[i][0] = a[i][0];
            for (j = 1; j < n; j++)
            {
                b[i][j] = b[i][j - 1] + a[i][j];
                c[i][j] = c[i][j - 1] + a[i][j];
                d[i][j] = d[i][j - 1] + a[i][j];
            }
        }
        for (j = 0; j < n; j++)
        {
            for (i = 1; i < n; i++)
            {
                b[i][j] = b[i - 1][j] + b[i][j];
                c[i][j] = c[i - 1][j] + c[i][j];
                d[i][j] = d[i - 1][j] + d[i][j];
            }
        }
        min_cost = INT_MAX;
        for (i = 0; i < n; i++)
        {
            for (j = i + 2; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    for (l = k + 2; l < n; l++)
                    {
                        cost1 = b[i][k] + b[j][l];
                        cost2 = c[i][l] + c[j][k];
                        cost3 = d[i][k] + d[j][l];
                        cost4 = d[i][l] + d[j][k];
                        cost = cost1 + cost2 + cost3 + cost4;
                        if (i == 0 && j == n - 1 && k == 0 && l == n - 1)
                            cost -= a[i][k] + a[j][l];
                        min_cost = min(min_cost, cost);
                    }
                }
            }
        }
        printf("%d\n", min_cost);
    }
    return 0;
}