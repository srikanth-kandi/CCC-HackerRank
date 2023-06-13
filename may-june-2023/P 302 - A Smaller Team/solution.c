#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d ", a + i);
    scanf("%d", &k);
    selectionSort(a, n, k);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}