#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

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

void search(int data)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("no");
        return;
    }
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            printf("yes");
            return;
        }
        temp = temp->next;
    }
    printf("no");
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
    search(k);
    return 0;
}