#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define Size 20

int top = -1;
int st[20];
void push(int);
int pop();
int main()
{
    char exp[20];
    scanf("%s", exp);
    int tmp;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (isalpha(exp[i]))
        {
            scanf("%d", &tmp);
            push(tmp);
        }
        else
        {
            int A, B;
            A = pop();
            B = pop();
            switch (exp[i])
            {
            case '+':
                push(B + A);
                break;
            case '-':
                push(B - A);
                break;
            case '*':
                push(B * A);
                break;
            case '/':
                push(B / A);
                break;
            case '%':
                push(B % A);
                break;
            default:
                printf("Invalid expression");
                break;
            }
        }
    }
    int res = pop();
    if (top == -1)
    {
        printf("%d", res);
    }
    return 0;
}
void push(int x)
{
    top++;
    st[top] = x;
}
int pop()
{
    int x;
    x = st[top];
    top--;
    return x;
}