#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int LCS(char *s1, char *s2)
{
    int m = strlen(s1);
    int n = strlen(s2);
    int max = 0;
    int dp[m + 1][n + 1];

    for (int i = 0; i < m; i++)
        dp[i][0] = 0;

    for (int i = 0; i < n; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = 0;

            if (max < dp[i][j])
                max = dp[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dp[i][j] == max)
                count++;
        }
    }
    return count;
}

int main()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    int res = LCS(s1, s2);
    printf("%d", res);

    return 0;
}
