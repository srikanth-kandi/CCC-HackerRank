[Q 101 - Trees - Inorder Traversal](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/trees-inorder-traversal)

**Problem Statement**
---
Your task is to implement the following function :

```C
void inorder(TreeNode*)
```

You will be working with the following structure :

```C
struct TreeNode {
	int x;
    struct TreeNode* L;
    struct TreeNode* R;
}
```

You may only edit the BODY of the code, leaving the HEAD and the TAIL as it is.

**Sample Input 0**

```
7
4 2 1 3 6 7 5
```

**Sample Output 0**

```
1 2 3 4 5 6 7
```

---

Given boiler plate code in C language

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define scan(x) scanf(" %d", &x)
struct TreeNode {
	int x;
	struct TreeNode* L;
	struct TreeNode* R;
};
typedef struct TreeNode TreeNode;
TreeNode* newNode(int _x) {
	TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
	node->x = _x;
	node->L = node->R = NULL;
  return node;
}
TreeNode* insert(TreeNode* node, int val) {
	if (node == NULL) return newNode(val);
	if (val <= node->x) node->L = insert(node->L, val);
	else node->R = insert(node->R, val);
return node;
}

/*********************************************************/

void inorder(TreeNode* Root)
{

// Your code here

}

/*******************************************************/

int main() {
	int val, N; scan(N);
	TreeNode* Root = NULL;
	for (int i = 1; i <= N; i++) {
		scan(val);
		Root = insert(Root, val);
	}
	inorder(Root);
}
```