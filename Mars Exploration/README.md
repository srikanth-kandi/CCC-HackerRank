[Mars Exploration](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/mars-exploration)

**Problem Statement**
---
A space explorer's ship crashed on Mars! They send a series of SOS messages to Earth for help.

<center><img src="https://s3.amazonaws.com/hr-challenge-images/16032/1453204202-9e3fd295bb-NASA_Mars_Rover.jpg"/></center>
<br>

Letters in some of the `SOS` messages are altered by cosmic radiation during transmission.<br>
Given the signal received by Earth as a string, $s$, determined how many letters of the `SOS` message have been changed by radiation.

**Example**

$s$ = `'SOSTOT'`

The original message was `SOSSOS`. Two of the message's characters were changed in transit.

**Function Description**

Complete the *marsExploration* function in the editor below.

marsExploration has the following parameter(s):

- *string s:* the string as received on Earth

**Returns**

- *int:* the number of letters changed during transmission

**Input Format**

There is one line of input: a single string, *s*.

**Constraints**

- $1 \leq \verb|length of s| \leq 99$
- $\verb|length of s modulo | 3 = 0$
- $s$ will contain only uppercase English letters, ascii[A-Z].

**Sample Input 0**

```
SOSSPSSQSSOR
```

**Sample Output 0**

```
3
```

**Explanation 0**

$s$ = **SOSSPSSQSSOR**, and signal length $|s| = 12$. They sent $4$ `SOS` messages (i.e,: $12/3 = 4$).

```
Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR
Difference:          X  X   X
```

**Sample Input 1**

```
SOSSOT
```

**Sample Output 1**

```
1
```

**Explanation 1**

$s$ = **SOSSOT**, and signal length $|s| = 6$. They send $2$ `SOS` messages (i.e.: $6/3 = 2$).

```
Expected Signal: SOSSOS     
Received Signal: SOSSOT
Difference:           X
```

**Sample Input 2**

```
SOSSOSSOS
```

**Sample Output 2**

```
0
```

**Explanation 2**

Since no character is altered, return $0$.