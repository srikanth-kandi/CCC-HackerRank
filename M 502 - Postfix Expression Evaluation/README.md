[M 502 : Postfix Expression Evaluation](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/02x09-postfix-expression-evaluation)

**Problem Statement**
---
A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and calculates the value of a given postfix expression.

**INPUT**

First line contains one string denoting the postfix expression. <br>
Second line contains space separated integers, each integer denotes the value of a variable, where the first integer denotes the value of the 'A', second integer denotes the value of 'B' and so on.<br>
It is guaranteed that there will be as many integers on second line as there are distinct variables in the postfix expression and that they will be the initial characters of the capital letter alphabet.

Look at the sample Input/Output for clarity

**OUTPUT**

Output one number denoting the final value of the expression.

**Sample Input 0**

```
AB+
3 7
```

**Sample Output 0**

```
10
```