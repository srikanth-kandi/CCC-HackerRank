#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

void swap(struct date *a, struct date *b)
{
    struct date temp = *a;
    *a = *b;
    *b = temp;
}

int compareDates(struct date date1, struct date date2)
{
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;
    else
    {
        if (date1.month < date2.month)
            return -1;
        else if (date1.month > date2.month)
            return 1;
        else
        {
            if (date1.day < date2.day)
                return -1;
            else if (date1.day > date2.day)
                return 1;
            else
                return 0;
        }
    }
}

void sortDates(struct date dates[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareDates(dates[j], dates[j + 1]) > 0)
                swap(&dates[j], &dates[j + 1]);
        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    struct date s[n];
    for (i = 0; i < n; i++)
        scanf("%d %d %d", &s[i].day, &s[i].month, &s[i].year);
    sortDates(s, n);
    for (i = 0; i < n; i++)
        printf("%d %d %d\n", s[i].day, s[i].month, s[i].year);
    return 0;
}