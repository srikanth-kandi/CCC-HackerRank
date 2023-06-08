#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int areMirrors(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return 1;
    }
    if (root1 == NULL || root2 == NULL)
    {
        return 0;
    }
    if (root1->data != root2->data)
    {
        return 0;
    }
    return areMirrors(root1->left, root2->right) && areMirrors(root1->right, root2->left);
}

Node *buildTree(int n)
{
    Node **nodes = (Node **)malloc(n * sizeof(Node));
    for (int i = 0; i < n; i++)
    {
        nodes[i] = createNode(i + 1);
    }

    int u, v;
    char lr;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d %d %c", &u, &v, &lr);
        if (lr == 'L')
        {
            nodes[u - 1]->left = nodes[v - 1];
        }
        else
        {
            nodes[u - 1]->right = nodes[v - 1];
        }
    }

    return nodes[0];
}

int main()
{
    int n;
    scanf("%d", &n);

    Node *root1 = buildTree(n);
    Node *root2 = buildTree(n);

    if (areMirrors(root1, root2))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}