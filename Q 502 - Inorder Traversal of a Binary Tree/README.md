[Q 502 - Inorder Traversal of a Binary Tree](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/inorder-traversal-of-a-binary-tree)

**Problem Statement**
---
You are given a binary tree in the form of an array.

Binary tree is represented as an array in the following format :

- the value of a node is stored in a[node].
- the value for the left child of the node is stored in a[node + node]
- the value for the right child of the node is stored in a[node + node + 1]
- for any node, if a[node] is 0 it means the node is null

Given the array representation of a binary tree, print its Inorder Traversal

**Input Format**

First line contains the size of the array N.<br>
Next line contains N integers denoting the array a.

**Constraints**

1 <= N <= $10^6$ <br>
a[node] = 0 for node == null otherwise 1 <= a[node] <= 1000

**Output Format**

Print N integers, the inorder traversal path for the given binary tree.

**Sample Input 0**

```
15
1 2 3 4 0 5 6 0 0 0 0 0 0 7 8
```

**Sample Output 0**

```
4 2 1 5 3 7 6 8
```