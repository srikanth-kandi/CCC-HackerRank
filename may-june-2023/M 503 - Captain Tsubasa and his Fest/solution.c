#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int stack[1000000];
int top;
void push(int x)
{
    top++;
    stack[top] = x;
}
void pop()
{

    top--;
}
int isempty()
{
    return top == -1;
}
int main()
{

    int t, n, id;
    scanf("%d\n", &t);

    while (t--)
    {
        scanf("%d %d\n", &n, &id);
        push(id);
        while (n--)
        {
            char q;
            scanf("%c ", &q);
            if (q == 'P')
            {
                int idd;
                scanf("%d\n", &idd);
                push(idd);
            }
            if (q == 'B')
            {
                if (isempty())
                    continue;
                int cur = stack[top];
                pop();
                if (isempty())
                    continue;
                int prev = stack[top];
                pop();
                push(cur);
                push(prev);
            }
        }
        printf("Player %d\n", stack[top]);
    }

    return 0;
}