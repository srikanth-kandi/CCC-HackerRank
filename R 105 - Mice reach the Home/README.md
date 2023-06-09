[R 105 : Mice reach the Home](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/assigning-mice-to-holes)

**Problem Statement**
---
There are $N$ Mice and $N$ holes are placed in a straight line.

Each hole can accomodate only `1` mouse.

A mouse can stay at his position, move one step right from `x` to `x + 1`, or move one step left from `x` to `x − 1`. Any of these moves consumes 1 minute.

Assign mice to holes so that the time when the last mouse gets inside a hole is minimized.

**Input Format**

First line contains the integer $N$.<br>
Next line contains $N$ integers, the position of the mice.<br>
Third line contains $N$ integers, the position of the holes.

**Constraints**

1 <= $N$ <= $10^5$

**Output Format**

Output one number corresponding to the minimum number of minutes it will take for the last mice to go into the hole.

**Sample Input 0**

```
3
4 -4 2
4 0 5
```

**Sample Output 0**

```
4
```