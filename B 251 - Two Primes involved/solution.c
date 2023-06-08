#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m, a1, a2, b1, b2, c1, c2, a, b, c;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);
    while (a1 != a2)
    {
        if (a1 < a2)
        {
            a1 += n;
        }
        else
        {
            a2 += m;
        }
    }
    a = (a1 > a2) ? a1 : a2;
    while (b1 != b2)
    {
        if (b1 < b2)
            b1 += n;
        else
            b2 += m;
    }
    b = (b1 > b2) ? b1 : b2;
    while (c1 != c2)
    {
        if (c1 < c2)
            c1 += n;
        else
            c2 += m;
    }
    c = (c1 > c2) ? c1 : c2;
    printf("%d", (2 * a + b) - c);
    return 0;
}
