#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, i, k = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d ", a + i);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[n - 1])
        {
            swap(&a[i], &a[k]);
            k++;
        }
    }
    swap(&a[k], &a[n - 1]);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}