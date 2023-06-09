[R x02: How to win](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/jason-fights-monsters)

**Problem Statement**
---
Jason is trapped in a forest with $n$ hungry monsters and must use his trusty blaster to defend himself! Each monster $i$ has a health $h_i$. Jason can discharge his blaster at a monster once per second and reduce its health points by $\verb|hit|$ units. Once a monster's health points become $\leq 0$, it dies.

Given the health values for each monster and an integer, $t$, can you determine the maximum number of monsters he can kill in $t$ seconds? Assume Jason always hits his target!

**Input Format**

The first line consists of three space-separated integers describing the respective values of $n$, $\verb|hit|$, and $t$.<br>
The second line consists of $n$ space-separated integers describing the values of $h_0, h_1, ... , h_{n - 1}$.

**Constraints**

$$1 \leq n \leq 10^5$$
$$1 \leq \verb|hit| \leq 10^9$$
$$1 \leq t \leq 10^9$$
$$1 \leq h_i \leq 10^9$$

**Output Format**

Print an integer denoting the maximum number of monsters Jason can kill in t seconds.

**Sample Input 0**

```
7 8 6
16 19 7 11 23 8 16
```

**Sample Output 0**

```
4
```

**Explanation 0**

<p align="center">
<img src="https://s3.amazonaws.com/hr-assets/0/1497839679-981b6925aa-exp.PNG"/>
<img src="https://s3.amazonaws.com/hr-assets/0/1497839698-c7e3e6f54f-exp0.PNG"/>
</p>

Thus, we print 4 as the maximum number of monsters we can kill in the given time period.