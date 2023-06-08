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
    else
    {
        while (temp->next != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}

void insertAtEnd(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node)), *x = head;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        while (x->next != NULL)
        {
            x = x->next;
        }
        x->next = temp;
    }
}

void deleteAtEnd()
{
    struct node *temp = head, *x;
    if (head == NULL)
        return;
    else if (head->next == NULL)
    {
        head = NULL;
        free(temp);
    }
    else
    {
        while (temp->next != NULL)
        {
            x = temp;
            temp = temp->next;
        }
        x->next = NULL;
        free(temp);
    }
}

int main()
{
    int n, k, tmp, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        insertAtEnd(tmp);
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        deleteAtEnd();
    }
    print();
    return 0;
}