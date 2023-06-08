[B 502 : Will it end in a zero?](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/alls-well-that-ends-in-a-zero)

**Problem Statement**
---
Given a decimal number N, you need to find the number of bases 1 < b <= n such that when the number N is represented in base 'b', it ends in a zero.

**Input Format**

Input contains only one number, N.

**Constraints**

1 <= N <= 10000

**Output Format**

Output one number, the number of bases b such that when number N is represented in base b, the number contains a trailing zero.

**Sample Input 0**

```
12
```

**Sample Output 0**

```
5
```

**Explanation 0**

<table>
    <tr>
        <th>Base</th>
        <th>Number</th>
    </tr>
    <tr><td>2</td><td>1100</td></tr>
    <tr><td>3</td><td>110</td></tr>
    <tr><td>4</td><td>30</td></tr>
    <tr><td>5</td><td>22</td></tr>
    <tr><td>6</td><td>20</td></tr>
    <tr><td>7</td><td>15</td></tr>
    <tr><td>8</td><td>14</td></tr>
    <tr><td>9</td><td>13</td></tr>
    <tr><td>10</td><td>12</td></tr>
    <tr><td>11</td><td>11</td></tr>
    <tr><td>12</td><td>10</td></tr>
</table>

$\therefore$ 12 ends with a zero in 5 different number systems - 2,3,4,6 and 12. Hence the answer is 5