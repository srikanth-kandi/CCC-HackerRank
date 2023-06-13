#include <stdio.h>
int main()
{
    int m, n, i, j, k, p, q;
    scanf("%d %d", &m, &n);
    int m1[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    scanf("%d %d", &p, &q);
    if (n != p)
    {
        printf("-1");
        return 0;
    }
    int m2[p][q];
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    int res[m][q];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}