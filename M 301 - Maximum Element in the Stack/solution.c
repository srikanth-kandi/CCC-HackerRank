#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int stack[100005];
int MAX = 100005;
int top = -1;
void push(int x){
    if(top >= MAX-1)
        return;
    else{
        top++;
        stack[top] = x;
    }
}
void pop(){
    if(top <= -1)
        return;
    else{
        top--;
    }
}

void printMax(){
    int maxEle = stack[top];
    for(int i=0;i<top;i++){
        if(maxEle < stack[i]){
            maxEle = stack[i];
        }
    }
    printf("%d\n",maxEle);
}

int main() {
    int n,t,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t == 1){
            scanf("%d",&x);
            push(x);
        } else if(t == 2){
            pop();
        } else{
            printMax();
        }
    }
    return 0;
}
