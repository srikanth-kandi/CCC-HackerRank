#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cmp(void const *a, void const *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", arr + i);
    qsort(arr, n, sizeof(int), cmp);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
