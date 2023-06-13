#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int stack[100005];
int MAX = 100005;
int top = -1;
void push(int x)
{
    if (top >= MAX - 1)
    {
        printf("Invalid\n");
        return;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("Invalid\n");
        return;
    }
    else
    {
        top--;
    }
}
void printMax()
{
    if (top == -1)
    {
        printf("Invalid\n");
        return;
    }
    int maxEle = stack[top];
    for (int i = 0; i < top; i++)
    {
        if (maxEle < stack[i])
        {
            maxEle = stack[i];
        }
    }
    printf("%d\n", maxEle);
}
void printMin()
{
    if (top == -1)
    {
        printf("Invalid\n");
        return;
    }
    int minEle = stack[top];
    for (int i = 0; i < top; i++)
    {
        if (minEle > stack[i])
        {
            minEle = stack[i];
        }
    }
    printf("%d\n", minEle);
}

int main()
{
    int n, x;
    char s[7];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        if (s[0] == 'A')
        {
            scanf("%d", &x);
            push(x);
        }
        else if (s[0] == 'R')
        {
            pop();
        }
        else if (s[0] == 'C' && s[6] == 'n')
        {
            printMin();
        }
        else
        {
            printMax();
        }
    }
    return 0;
}