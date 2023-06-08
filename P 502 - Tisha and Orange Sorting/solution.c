#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[r]);

    return i + 1;
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = partition(arr, l, r);
        printf("%d\n", p);

        for (int i = l; i <= r; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, r);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    return 0;
}