[N 102 : The Circular Queue](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/02x05-the-circular-queue)

**Problem Statement**
---
A circular queue is a data structure based on the concept FIFO - First In First Out, just like a queue with its ends connected.<br>
In the last problem you implemented a normal linear queue.<br>
Your task now is to implement a circlar queue using a circular linked list.

Your implementation must include the following functionalities :

```
queueNode* head; - element to the head of the queue
void push(int element) - push element to the back of the queue
void pop() - remove one element from front of queue
int empty() - returns 1 if queue is empty and zero otherwise
```

1. You are NOT allowed to add global variables/arrays to the body of the code.
2. All the functions must have an $O(1)$ running complexity.
3. You are not responsible for taking any input or output.
4. You are not supposed to modify any part of the code except the BODY of the code.
5. Only edit the body of the code and implement the required functions with the given prototypes.

NOTE : Also read about the advantages and disadvantages of using a circular linked list instead of an array for representing a Queue.

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

struct queueNode{
    int data;
    struct queueNode* next;
};
typedef struct queueNode queueNode;
queueNode* head = NULL;

queueNode* newNode(int val)
{
    queueNode* t = (queueNode*) malloc(sizeof(queueNode));
    t->data = val, t->next = NULL;
    return t;
}

//BODY

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