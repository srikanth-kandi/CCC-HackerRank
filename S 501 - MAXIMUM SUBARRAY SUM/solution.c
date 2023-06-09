#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maxSubArraySum(int a[], int size) // Kadane's Algorithm
{
    int max = 0, max_sum = 0;

    for (int i = 0; i < size; i++)
    {
        max = max + a[i];
        if (max < a[i])
            max = a[i];

        if (max_sum < max)
            max_sum = max;
    }
    return max_sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d", maxSubArraySum(a, n));

    return 0;
}