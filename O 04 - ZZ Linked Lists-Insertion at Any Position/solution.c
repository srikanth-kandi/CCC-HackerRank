#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void print()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    while (temp->next != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}

void insertAtPos(int pos, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node)), *x = head, *y = head;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL || pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            y = x;
            x = x->next;
            if (x == NULL)
                break;
        }
        y->next = temp;
        temp->next = x;
    }
}

int main()
{
    int n, pos, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &pos, &tmp);
        insertAtPos(pos, tmp);
    }
    print();
    return 0;
}