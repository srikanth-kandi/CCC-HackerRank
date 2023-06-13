[N 101 : The Queue Data Structure](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/02x04-the-queue-data-structure)

**Problem Statement**
---
Queue : Definition : a list of data items, commands, etc., stored so as to be retrievable in a definite order, usually the order of insertion.<br>
A queue is a data structure based on the concept FIFO - First In First Out.

Your task is to implement a queue using arrays.

Your implementation must include the following functionalities :

```
int queue[] - global array to maintain queue data
int top - global variable to maintain index to queue top
int bottom - global variable to maintain index of queue bottom
void push(int element) - push element to the back of the queue
void pop() - remove one element from front of queue
int empty() - returns 1 if queue is empty and zero otherwise
```

You are allowed to add global variables/arrays to the body of the code.<br>
All the functions must have an O(1) running complexity.<br>
You are not responsible for taking any input or output.<br>
You are not supposed to modify any part of the code except the BODY of the code.<br>
Only edit the body of the code and implement the required functions with the prototypes as given above.

**INPUT**

Not Needed

**OUTPUT**

Not Needed

**Sample Input 0**

```
10
push 1
push 2
push 3
push 4
pop
top
pop
top
pop
top
```

**Sample Output 0**

```
2
3
4
```

---

Given boiler plate code for C language

```C
//HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//BODY

int queue[500005], front, back;
void push(int val)
{
}
void pop()
{
}
int top()
{
}
int empty()
{
}

// TAIL

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't')
        {
            if (empty()) printf("Invalid\n");
            else                
                printf("%d\n", top());
        }
        else if (s[0] == 'p' && s[1] == 'o')
        {
            if (empty()) printf("Invalid\n");
            else    pop();
        }
        else
        {
            scanf(" %d", &x);
            push(x);
        }
    }
    return 0;
}
```