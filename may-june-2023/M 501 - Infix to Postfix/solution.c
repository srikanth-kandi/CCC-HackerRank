#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

char st[20];
int top = -1;
void push(char ch)
{
    top++;
    st[top] = ch;
}
char pop()
{
    char x;
    x = st[top];
    top--;
    return x;
}
int precedence(char op)
{
    switch (op)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;
    }
    return 3;
}
int main()
{
    char in[20], post[20];
    int i, j = 0; // since array is starts from 0
    scanf("%s", in);
    for (i = 0; in[i] != '\0'; i++)
    {
        if (isalnum(in[i]))
        {
            post[j] = in[i];
            j++;
        }
        else if (in[i] == '(')
        {
            push(in[i]);
        }
        else if (in[i] == ')') //')' pop all elements from stack and add to postfix then pop '(' and ignore it.
        {
            while (st[top] != '(')
            {
                post[j] = pop();
                j++;
            }
            pop(); // for poping '(' also we are popping one more time.
        }
        else // in case of operator
        {
            while ((top != -1 && st[top] != '(') && (precedence(st[top]) >= precedence(in[i]))) // stack is not empty
            {
                post[j] = pop();
                j++;
            }
            push(in[i]);
        }
    }
    while (top != -1)
    {
        post[j] = pop();
        j++;
    }
    post[j] = '\0';
    printf("%s", post);
    return 0;
}