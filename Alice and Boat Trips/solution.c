#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, c, m, i, tmp;
    scanf("%d %d %d", &n, &c, &m);
    bool flag = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (c * m >= tmp)
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}