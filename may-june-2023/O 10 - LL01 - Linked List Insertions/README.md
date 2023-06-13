[O 10 - LL01 - Linked List Insertions](https://www.hackerrank.com/contests/may-jun-2023-ccc-lbrce-coding-practice-open/challenges/ll01-linked-list-insertions)

**Problem Statement**
---
You will be implementing functions to insert nodes into a linkedlist.

The following is the structure of the linked list node :

```C
struct LinkedListNode {
	int val;
    struct LinkedListNode* next;
};
typedef struct LinkedListNode LinkedListNode;
```

Here are the details of the functions that you are expected to implement :

```C
LinkedListNode* insertAtBeginning(LinkedListNode* head, int value)
/* 
 * Inserts a node at the beginning of the linked list and
 * returns a pointer to the head of the new linked list
 */
 
LinkedListNode* insertAtEnd(LinkedListNode* head, int value)
/*
 * Inserts a node at the end of the linked list and
 * returns a pointer to the head of the new list
 */
 
LinkedListNode* insertAtPosition(LinkedListNode* head, int value, int pos)
/*
 * Inserts a node at "pos" position
 * "pos" = 1 indicates insert at beginning
 * return the head of the original linked list if "pos" is invalid
 * Must return a pointer to the head of the new list after insertion
 */
```

**Input**

Not Needed

**Output**

Not Needed

**Instructions**

1. You are only allowed to edit the Body of the code
2. The Head and the Tail of the code must remain as it is
3. You are not responsible for taking any input/output
4. You must write the function with names exactly as given above
5. You must not create any global variables

**Sample Input 0**

```
10 10
```

**Sample Output 0**

```
correct
```

---

Given boiler plate code for C language

```C
//-------------------- head of the code ------------------------


#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define in(x) scanf(" %d", &x);
#define LLN LinkedListNode
typedef struct LinkedListNode LinkedListNode;
struct LinkedListNode {
	int val;
	struct LinkedListNode* next;
};

//-------------------- body of the code ------------------------


LinkedListNode* insertAtBeginning(LinkedListNode* head, int val) {

}

LinkedListNode* insertAtEnd(LinkedListNode* head, int val) {
  
}

LinkedListNode* insertAtPosition(LinkedListNode* head, int val, int pos) {

}

//-------------------- tail of the code ------------------------


int rng(int lim) {
	if (lim == 0) return 0;
	return rand()%lim;
}
int a[1000005], sz = 0;
void insertt(int val, int pos) {
	if (pos < 0) return;
	if (pos > sz + 1) return;
	sz += 1;
	for (int i = sz; i > pos; i--)
		a[i] = a[i - 1];
	a[pos] = val;
}
void erasee(int pos) {
	if (pos > sz) return;
	if (pos < 1) return;
	sz--;
	for (int i = pos; i <= sz; i++)
		a[i] = a[i + 1];
}
int check(LinkedListNode* head) {
	for (int i = 1; i <= sz; i++) {
		if (head == NULL) return 0;
		if (head->val != a[i]) return 0;
		head = head->next;
	}	
	if (head != NULL) return 0;
	return 1;
}
int main() {
	srand(time(NULL));
	int t, n; in(t); in(n);
	while (t--) {
		LinkedListNode* head = NULL;
		sz = 0;
		for (int i = 0; i < n; i++) {
			int type = rng(3);
			if (type == 0) {
				int val = rng(1000);
				head = insertAtBeginning(head, val);
				insertt(val, 1);
				if (n <= 1000 && !check(head)) {
					printf("incorrect insertAtBeginning");
					return 0;
				}
			}

			if (type == 1) {
				int val = rng(1000);
				head = insertAtEnd(head, val);
				insertt(val, sz + 1);
				if (n <= 1000 && !check(head)) {
					printf("incorrect insertAtEnd");
					return 0;
				}
			}

			if (type == 2) {
				int val = rng(1000);
				int pos = rng(sz + 1) + 1;
				head = insertAtPosition(head, val, pos);
				insertt(val, pos);
				if (n <= 1000 && !check(head)) {
					printf("incorrect insertAtPosition");
					return 0;
				}
			}
		}
      	if (!check(head)) {
        	printf("incorrect");
            return 0;
        }
	}
	printf("correct");
}
```