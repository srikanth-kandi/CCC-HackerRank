[MT101 Matrix Sum 2](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/matrix-sum-2/problem)

**Problem Statement**
---
You are given a square matrix of integers. The cost of travelling from a cell A to cell B is the sum of numbers in all the cells which lie on the path between A and B, inclusive.

You need to travel from the top left cell to the bottom right cell, and back, minimizing the total cost of travel, subject to the following conditions:

1. You cannot use squares on the leading diagonal of the matrix (Apart from the top left and the bottom right cells.)

2. When travelling to the bottom right corner, you may only move rightwards or downwards. Similarly, while travelling back to the top left corner, you may move only leftwards or upwards.

3. Your first move while going from top left to bottom right should be rightwards. Similarly, your first move while going from bottom right to top left should be leftwards.

**Sample Input**

```
3
4 10 6
1 1 5
-5 6 8
4
5 11 4 6
3 2 10 3
1 3 1 3
4 2 8 8
```

**Sample Output**

```
39
62
```

**Explanation**

In the first test case, there is exactly one path available. The solution is 4 + 10 + 6 + 5 + 8 + 6 -5 + 1 + 4 = 39.

In the second case, we get 5->11->4->6->3->3->8->8->2->3->1->3->5, leading to a total of 62.

Note that you cannot use the cells of the leading diagonal in your path, apart from the top left and the bottom right cells.

**Input Format**

The first line of input consists of a single integer T, the number of test cases. T Test cases follow. Each test case contains a single integer N, the number of rows in the matrix, followed by N lines, each containing N integers.

**Constraints**

1<=T<=50 2<=N<=100 Each member of the matrix, as well as the solution, will fit in a 32 bit unsigned integer.

**Output Format**

For each test case, output on a single line the minimum cost of travelling from the top left corner to the bottom right corner, and back, subject to the constraints mentioned in the problem statement.