// HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

// BODY

int queue[500005], front = 0, rear = -1, SIZE = 500005;
void push(int val)
{
    if (rear == SIZE - 1)
        return;
    else
    {
        rear++;
        queue[rear] = val;
    }
}
void pop()
{
    if (front > rear)
        return;
    else
    {
        front++;
        if (front > rear)
        {
            front = 0;
            rear = -1;
        }
    }
}
int top()
{
    return queue[front];
}
int empty()
{
    return front == 0 && rear == -1;
}

// TAIL

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't')
        {
            if (empty())
                printf("Invalid\n");
            else
                printf("%d\n", top());
        }
        else if (s[0] == 'p' && s[1] == 'o')
        {
            if (empty())
                printf("Invalid\n");
            else
                pop();
        }
        else
        {
            scanf(" %d", &x);
            push(x);
        }
    }
    return 0;
}