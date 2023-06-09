#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int deadline;
    int profit;
} Task;

int compareTasks(const void *a, const void *b)
{
    Task *taskA = (Task *)a;
    Task *taskB = (Task *)b;
    return taskB->profit - taskA->profit;
}

int findMaxProfit(int n, int *deadlines, int *profits)
{
    Task *tasks = (Task *)malloc(n * sizeof(Task));
    for (int i = 0; i < n; i++)
    {
        tasks[i].deadline = deadlines[i];
        tasks[i].profit = profits[i];
    }

    qsort(tasks, n, sizeof(Task), compareTasks);

    int maxDeadline = 0;
    for (int i = 0; i < n; i++)
    {
        if (tasks[i].deadline > maxDeadline)
        {
            maxDeadline = tasks[i].deadline;
        }
    }

    int *schedule = (int *)calloc(maxDeadline, sizeof(int));
    int totalProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int deadline = tasks[i].deadline;

        while (deadline > 0)
        {
            if (schedule[deadline - 1] == 0)
            {
                schedule[deadline - 1] = 1;
                totalProfit += tasks[i].profit;
                break;
            }
            deadline--;
        }
    }

    free(tasks);
    free(schedule);

    return totalProfit;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int *deadlines = (int *)malloc(n * sizeof(int));
        int *profits = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &deadlines[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &profits[i]);
        }

        int maxProfit = findMaxProfit(n, deadlines, profits);

        printf("%d\n", maxProfit);

        free(deadlines);
        free(profits);
    }

    return 0;
}
