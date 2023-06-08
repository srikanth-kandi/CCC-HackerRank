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

int height(Node *root)
{
    if (root == NULL)
        return -1;
    else
    {
        int a = height(root->left);
        int b = height(root->right);
        return a > b ? a + 1 : b + 1;
    }
}

void levelOrder(Node *root, int level, int k)
{
    if (root == NULL)
        return;
    else if (level == 0)
        printf("%d ", root->data);
    else
    {
        if (k)
        {
            levelOrder(root->left, level - 1, k);
            levelOrder(root->right, level - 1, k);
        }
        else
        {
            levelOrder(root->right, level - 1, k);
            levelOrder(root->left, level - 1, k);
        }
    }
}

void zigzag(Node *root)
{
    int h = height(root), k = 1;
    for (int i = 0; i <= h; i++)
    {
        levelOrder(root, i, k);
        k = !k;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Node *root = buildTree(n);
    zigzag(root);
    return 0;
}