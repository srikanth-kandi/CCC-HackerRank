[R 101 : Eat Less](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/eat-less)

**Problem Statement**
---
Marc loves cupcakes, but he also likes to stay fit. He eats $n$ cupcakes in one sitting, and each cupcake $i$ has a calorie count $c[i]$ . After eating a cupcake with $c$ calories, he must walk at least $2^j$ * c (where $j$ is the number cupcakes he has already eaten) miles to maintain his weight.

Given the individual calorie counts for each of the cupcakes, find and print a long integer denoting the minimum number of miles Marc must walk to maintain his weight. Note that he can eat the cupcakes in any order.

Notes: Has to be done greedily so that you have to burn as less calories as possible

**Input Format**

The first line contains an integer, $N$ , denoting the number of cupcakes.<br>
The second line contains $N$ space-separated integers describing the respective calorie counts of each cupcake,c[1]...c[n].

**Constraints**

1<=$n$<=40<br>
1<=$c_i$<=1000

**Output Format**

Print a long integer denoting the minimum number of miles Marc must walk to maintain his weight.

**Sample Input 0**

```
3
1 3 2
```

**Sample Output 0**

```
11
```