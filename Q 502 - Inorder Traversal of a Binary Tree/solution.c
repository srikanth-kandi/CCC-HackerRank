#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void inorder(int a[], int i, int n)
{
    if (i >= n || a[i] == 0)
        return;
    else
    {
        inorder(a, 2 * i + 1, n);
        printf("%d ", a[i]);
        inorder(a, 2 * i + 2, n);
    }
}

int main()
{
    int n;
    scanf("%d ", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d ", a + i);
    inorder(a, 0, n);
    return 0;
}
