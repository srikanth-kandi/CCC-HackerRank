#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(long long int *)a - *(long long int *)b;
}

int main()
{

    long long int n, hit, t;
    scanf("%lld%lld%lld", &n, &hit, &t);
    long long int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    qsort(a, n, sizeof(long long int), cmp);

    long long int c = 0, d = 0;
    i = 0;

    while (a[i] > 0)
    {
        a[i] -= hit;
        c++;
        if (a[i] <= 0)
        {
            d++;
            i++;
        }
        if (c == t)
            break;
    }

    printf("%lld", d);

    return 0;
}