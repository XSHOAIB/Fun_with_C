--> STACKS USING ARRAYS.
#include<stdio.h>
#include<stdlib.h>

int stack[5], top = -1,size = 5;

void push(int ele){
    if(top==size-1){
        printf("\nstack is full");
    }
    top++;
    stack[top]=ele;
    printf("\nelement pushed");
}

void pop(){
    if(top==-1){
        printf("\nstack is empty");
    }
    top--;
    printf("\nelement popped");
}

void display(){
    if (top==-1){
        printf("stack is empty");
    }
    for(int i=top;i>=0;i--){
        printf("\n |  %d  |",stack[i]);
    }
}

int main (){
    int ele, ch,n;
    while(1){
        printf("\n Implementation of stcks using arrays.");
        printf("\n 1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case(1): printf("\nenter element:"); scanf("%d",&ele); push(ele); break;
            case(2): pop(); break;
            case(3): display(); break;
            case(4): exit(1);
            default: printf("invalid");
        }
    }
    return 0;
}
