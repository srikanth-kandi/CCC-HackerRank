[R 301 : Empty Tank](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/gas-stations)

**Problem Statement**
---
There are $N$ gas stations along a circular route, where the amount of gas at station $i$ is `gas[i]`.

You have a car with an unlimited gas tank and it costs `cost[i]` of gas to travel from station $i$ to its next station ($i$+1). You begin the journey with an empty tank at one of the gas stations.

Print the minimum starting gas station’s index if you can travel around the circuit once, otherwise print `-1`.

You can only travel in one direction. $i$ to $i$+1, $i$+2, ... $n$-1, 0, 1, 2.. Completing the circuit means starting at $i$ and ending up at $i$ again.

**Input Format**

First line contains the number of gas stations $N$.<br>
Second line contains $N$ integers, the $i^{th}$ of them denoting `gas[i]`.<br>
Third line contains $N$ integers, the $i^{th}$ of them denoting `cost[i]`.

**Constraints**

1 <= $N$ <= $10^5$

**Output Format**

Print the minimum starting gas station’s index if you can travel around the circuit once, otherwise print -1.

**Sample Input 0**

```
2
1 2
2 1
```

**Sample Output 0**

```
1
```