[Q 801 - Zig Zag Traversal](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/zig-zag-level-order-traversal)

**Problem Statement**
---
Your task is to write a program to print the zigzag level-order traversal of a binary tree.<br>
Here are a few examples :

```
  1
 / \
2   3
Traversal : 1 3 2
```

```
    1
   / \
  2   3
 / \   \
4   5   6
Traversal : 1 3 2 4 5 6
```

```
       1
      / \
     2   3
    / \   \
   4   5   6
  /   /   / \
 7    8  9   10
 Traversal : 1 3 2 4 5 6 10 9 8 7
```

**Input**

First line contains the number of nodes N.<br>
Next N-1 lines contains information about one edge each.<br>
Each line consists of three values : U V C which denotes that V is a child of U<br>
If C is 'L' then V is a left child and if C is 'R' then V is a right child

**Output**

Print the zigzag level order traversal as explained

**Sample Input 0**

```
3
1 2 L
1 3 R
```

**Sample Output 0**

```
1 3 2
```