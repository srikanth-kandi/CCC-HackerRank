#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], k = 0, m = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            if (k == 3 || k == 2)
            {
                printf("no");
                return 0;
            }
            k = 1;
        }
        else if (a[i] == a[i + 1])
        {
            if (k == 3)
            {
                printf("no");
                return 0;
            }
            k = 2;
            m = 1;
        }
        else if (a[i] > a[i + 1])
        {
            k = 3;
        }
    }
    if (m == 1 || n == 1 || k == 3)
        printf("yes");

    return 0;
}