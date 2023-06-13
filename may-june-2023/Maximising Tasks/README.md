[Maximising Tasks](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/maximising-tasks)

**Problem Statement**
---
You are given **N** tasks, each of them has a starting time and an ending time.

Given that you can only work on a single task at a time, write a program to find out the maximum number of tasks that you can complete.

Note that in order to complete a task you must work on it from its starting time to its ending time and you can only work on one task at a time.

**INPUT**

First line contains the number of test cases **T**.<br>
For every test case :<br>
First line contains the integer **N**.<br>
Next line contains **N** integers denoting the starting times of tasks.<br>
Last line contains **N** integers denoting the ending times of tasks.<br>

**OUTPUT**

Print one number, the maximum number of tasks that can be completed for every test case on a new line

**NOTES**

**1 ≤ N, Si, Ei ≤ $10^5$**

**Sample Input 0**

```
2
6
1 3 0 5 8 5
2 4 6 7 9 9
6
5 1 3 0 5 8
9 2 4 6 7 9
```

**Sample Output 0**

```
4
4
```