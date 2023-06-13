// HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

// BODY

struct stackNode
{
    int val;
    struct stackNode *next;
};
typedef struct stackNode stackNode;
stackNode *stackHead;
void push(int x)
{
    stackNode *temp = (stackNode *)malloc(sizeof(stackNode));
    if (temp == NULL)
        return;
    else
    {
        temp->val = x;
        temp->next = stackHead;
        stackHead = temp;
    }
}
int peek()
{
    return stackHead->val;
}
void pop()
{
    stackNode *temp = stackHead;
    if (stackHead == NULL)
        return;
    else
    {
        stackHead = stackHead->next;
        free(temp);
    }
}
int empty()
{
    return stackHead == NULL;
}

// TAIL

int main()
{
    int n;
    stackHead = NULL;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t, x;
        scanf("%d", &t);
        if (t == 1)
        {
            scanf("%d", &x);
            push(x);
        }
        else if (t == 2)
        {
            if (empty())
            {
                printf("Invalid\n");
            }
            else
            {
                pop();
            }
        }
        else if (t == 3)
        {
            if (empty())
            {
                printf("Invalid\n");
                continue;
            }
            stackNode *j = stackHead;
            while (j)
            {
                printf("%d ", j->val);
                j = j->next;
            }
            printf("\n");
        }
        else
        {
            if (empty())
            {
                printf("Invalid\n");
                continue;
            }
            printf("%d\n", peek());
        }
    }
    return 0;
}