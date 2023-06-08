[O 04 - ZZ Linked Lists-Insertion at Any Position](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/unit2-linked-lists-insertion-at-any-position)

**Problem Statement**
---
Write a program to create a linked list with the given number of elements by inserting every element at positon required by the user.If there are no elements given then the head of the linked list will be null. After completing the insertion of all elements print the elements in the linked list at the end. If no elements are inserted then print null on the standard output.

Note: Intially the linked list will be empty.Assume that A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. Always that first insertion position will be zero.

**Input Format**

First Line contains number of elements(n) to be inserted and followed the n lines. Where each line will contain two integers. First integer denotes the position and the second one denotes the data that has to be inserted.

**Constraints**

0<=n<=100

0<=pos<=n-1

1<=element<=10000

**Output Format**

Print the elements in the linkedlist

**Sample Input 0**

```
4
0 2
0 3
1 4
1 5
```

**Sample Output 0**

```
3->5->4->2
```

**Explanation 0**

```
Initially the list will be empty.After inserion of 2 it will be changed to

2->NULL

After insertion of 3 The list will be changed to

3->2->NULL

After insertion of 4 it will be changed to

3->4->2->NULL

After insertion of 5 it will be changed to

3->4->5->2->NULL
```