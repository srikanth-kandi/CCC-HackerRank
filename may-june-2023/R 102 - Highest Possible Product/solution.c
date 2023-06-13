#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(void const *a, void const *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d ", a + i);
    qsort(a, n, sizeof(int), compare);
    long product1 = a[0] * a[1] * a[2];
    long product2 = a[n - 1] * a[n - 2] * a[0];
    product1 >= product2 ? printf("%ld", product1) : printf("%ld", product2);
    return 0;
}
