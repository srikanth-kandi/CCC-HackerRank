[M 301 : Maximum Element in the Stack](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/maximum-element-in-the-stack)

**Problem Statement**
---
You have an empty sequence, and you will be given $N$ queries. Each query is one of these three types:

```
1 x - Push the element x into the stack.
2   - Delete the element present at the top of the stack.
3   - Print the maximum element in the stack.
```

**Input Format**

The first line of input contains an integer, $N$. The $N$ lines each contain above mentioned query. *(It is guaranteed that each query is valid.)*

**Constraints**

$$
1 \leq N \leq 10^5
$$
$$
1 \leq x \leq 10^9
$$
$$
1 \leq \verb|type| \leq 3
$$

**Output Format**

For each type 3 query, print the maximum element in the stack on a new line.

**Sample Input 0**

```
10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3
```

**Sample Output 0**

```
26
91
```