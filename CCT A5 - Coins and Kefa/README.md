[CCT A5 - Coins and Kefa](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/kefa-hates-coins)

**Problem Statement**
---
Kefa hates coins and thinks that coins are a currency of the poor.

She has **N** coins with her, **$i^{th}$** of them having the value **$A_i$**.<br>
She goes to a shop to buy **M** gifts, with the price of **$i^{th}$** gift being **$P_i$**.

She wants to get rid of as many coins as she can and she buys the gift one by one from the **$1^{st}$** one to the **$M^{th}$** one. She adopts the following strategy while buying any particular gift **i** : She wants to give the shopkeeper a total of **X** coins whose value sum up to **K** such that -

1. **K** ≥ **$P_i$**
2. **X** is maximized
3. **K** - **$P_i$** is minimized

She does not consider other gifts while buying a particular gift i.e. while buying every gift she tries her best to satisfy the above conditions for that gift.

Your task is, given the array **A** and the array **P**, for every gift, find and print the values of **X** and **K**, or print **-1 -1** if she will not be able to buy the gift at all.

**INPUT**

First line contains two numbers **N** and **M**.<br>
Second line contains the array **A** of size **N**.<br>
Third line contains the array **P** of size **M**.

**OUTPUT**

Print **M** lines of output, for every gift two integers on a new line.<br>
The two integers should denote the values of **X** and **K** while buying that gift optimally.<br>
If it is not possible to buy a particular gift with available coins, print *"-1 -1"*

**CONSTRAINTS**

**1 ≤ N, M ≤ $10^5$**<br>
**1 ≤ $A_i$, $P_i$ ≤ $10^5$**

**Sample Input 0**

```
10 5
1 2 3 4 5 1 2 3 4 5
6
6
6
6
6
```

**Sample Output 0**

```
4 6
2 6
2 8
2 10
-1 -1
```