[Task Scheduling 1](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/task-scheduling-1-2)

**Problem Statement**
---
You are given **N** tasks.

The **$i^{th}$** task has deadline **$T_i$** and generates a profit of **$P_i$**. Every task takes one second to complete. Time starts at t = 0.

Your task is to find an optimal way to do the tasks so as to generate the maximum amount of total profit.

You have to print the maximum possible profit that you were able to make.

**INPUT**

First line contains the number of test cases **T**.<br>
For every test case :<br>
First line contains the integer **N**.<br>
Next line contains **N** integers denoting the array **T**.<br>
Last line contains **N** integers denoting the array **P**.

**OUTPUT**

Print one number, the maximum profit that you can make for every test case on a new line

**NOTES**

**1 ≤ N, $T_i$, $P_i$ ≤ 1000**

**Sample Input 0**

```
2
4
4 1 1 1
20 10 40 30
5
2 1 2 1 3
100 19 27 25 15
```

**Sample Output 0**

```
60
142
```