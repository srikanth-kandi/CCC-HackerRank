#include <stdio.h>

void sortQueue(int arr[], int n)
{
    int newPerson = arr[n - 1]; // Get the battery percentage of the new person

    // Find the correct position to insert the new person's battery percentage
    int i = n - 2;
    while (i >= 0 && arr[i] > newPerson)
    {
        arr[i + 1] = arr[i]; // Shift the elements to the right
        i--;
    }

    arr[i + 1] = newPerson; // Insert the new person's battery percentage at the correct position
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortQueue(arr, n);

    // Print the sorted queue
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}