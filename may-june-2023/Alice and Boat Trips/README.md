[Alice and Boat Trips](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/alice-and-boat-trips/problem)

**Problem Statement**
---
Alice owns a company that transports tour groups between two islands. She has $n$ trips booked, and each trip has $p_i$ passengers. Alice has $m$ boats for transporting people, and each boat's maximum capacity is $c$ passengers.

Given the number of passengers going on each trip, determine whether or not Alice can perform all $n$ trips using no more than $m$ boats per individual trip. If this is possible, print **Yes**; otherwise, print **No**.

**Input Format**

The first line contains three space-separated integers describing the respective values of $n$ (number of trips), $c$ (boat capacity), and $m$ (total number of boats).<br>
The second line contains n space-separated integers describing the values of $p_0$, $p_1$, $p_2$ ... $p_{n-1}$

**Constraints**

1 <= $n$, $c$, $m$ <= 100<br>
1 <= $p_i$ <= 100

**Output Format**

Print **Yes** if Alice can perform all $n$ booked trips using no more than $m$ boats per trip;<br>otherwise, print **No**.

**Sample Input 0**

```
5 2 2
1 2 1 4 3
```

**Sample Output 0**

```
Yes
```

**Explanation 0**

Alice has $m = 2$ boats and a maximum capacity of $c = 2$ passengers per boat. This means she can transport at most $m . c = 4$ passengers at a time.

There are $n = 5$ tour groups, and the largest tour group contains $p_3 = 4$ passengers. Because Alice will be able to transport each group using $\leq m$ boats per group, we print *Yes*.

**Sample Input 1**

```
5 1 2
1 2 1 4 1
```

**Sample Output 1**

```
No
```

**Explanation 1**

Alice has $m = 2$ boats and a maximum capacity of $c = 1$ passenger per boat. This means she can transport at most $m . c = 2$ passengers at a time.

There are $n = 5$ tour groups, and the largest tour group contains $p_3 = 4$ passengers. Because Alice does not have enough boats to transport a group of four passengers, we print **No**.
