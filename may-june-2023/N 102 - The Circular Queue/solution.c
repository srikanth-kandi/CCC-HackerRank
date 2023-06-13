// HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

struct queueNode
{
    int data;
    struct queueNode *next;
};
typedef struct queueNode queueNode;
queueNode *head = NULL;
queueNode *f = NULL;
queueNode *r = NULL;

queueNode *newNode(int val)
{
    queueNode *t = (queueNode *)malloc(sizeof(queueNode));
    t->data = val, t->next = NULL;
    return t;
}

// BODY

void push(int val)
{
    queueNode *temp = newNode(val);
    if ((r == NULL) && (f == NULL))
    {
        f = r = temp;
        r->next = f;
    }
    else
    {
        r->next = temp;
        r = temp;
        temp->next = f;
    }
}
void pop()
{
    queueNode *t = f;
    if ((f == NULL) && (r == NULL))
        return;
    else if (f == r)
    {
        f = r = NULL;
        free(t);
    }
    else
    {
        f = f->next;
        r->next = f;
        free(t);
    }
}
int top()
{
    return f->data;
}
int empty()
{
    return (f == NULL) && (r == NULL);
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