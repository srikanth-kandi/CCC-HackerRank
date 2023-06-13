[Bike race](https://www.hackerrank.com/contests/jun-23-ccc-lbrce-practice-assessment/challenges/into-the-water)

**Problem Statement**
---
Aditi takes place in a bike race. The race takes place along the roads at the shores of the Hussain Sagar Lake. As everyone knows, the boundaries of the Hussain Sagar Lake consists only of straight lines that are either horizontal with respect to the equator or vertical as seen from the space.

Assume a 2D co-ordinate system with the hussain sagar lake being a polygon in it with all its side either parallel to the X-axis or the Y-axis. The starting point of the race is the southernmost position of the boundary. Since all sections are straight, Aditi is always travelling in one of the four directions : East, West, North or South. Every turn is a 90 degree turn i.e. every two consecutive roads will be perpendicular to each other.

Aditi is still naive so she is not very confident at some turns. Name, Aditi feels insecure at a turn there is a possibility that she can fall into the Hussain Sagar Lake. In formal words, Aditi considers a turn dangerous if she can fall directly into the water upon ignoring the turn.

Help Aditi get ready for the competition -- determine the number of dangerous turns.

**Input Format**

The first line contains integer N, the number of straight sections of the boundary.
Next $N$+1 lines contains pairs of integers ($x_i$, $y_i$). The first of these points is the starting position. The ith straight section begins at point ($x_i$, $y_i$) and ends at ($x_i$+1, $y_i$+1).<br>
It is guaranteed that :

- The first section is directed towards north.
- The southernmost point is the starting point.
- The last point coincides with the first point.
- Any pairs of straight lines share no points - except the neighbouring tracks that share one end point.
- No pair of points except the first and the last is same.

**Constraints**

4 <= $n$ <= 100<br>
-10000 <= $x_i$ , $y_i$ <= 10000

**Output Format**

Print a single integer — the number of dangerous turns on the track.

**Sample Input 0**

```
6
0 0
0 1
1 1
1 2
2 2
2 0
0 0
```

**Sample Output 0**

```
1
```

**Explanation 0**

![Explanation 0](https://s3.amazonaws.com/hr-assets/0/1498582464-90803b51f3-tc0.PNG)