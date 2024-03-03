#include<stdio.h>
#include<stdlib.h>

int top=-1;
int stack[5],size=5;

void push(int ele){
    if(top==size-1){
        printf("\nstack is full\n");
        return;
    }
    top++;
    stack[top];
    printf("Element is Pushed\n");
}

void pop(){
    if(top==-1){
        printf("stack is empty");
        return;
    }
    printf("element %d is popped", &stack[top]);
    //free(stack[top]);
    top--;
}

void display(){
    if(top==-1){
        printf("stack is empty");
        return;
    }
    for(int i=0;i<=size;i++){
        printf("stack elements: %d\n",stack[i]);
    }
}

void main(){
    int ch,ele;
    while (1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n enter choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("enter the element:\n");scanf("%d",&ele);
        push(ele); break;
        case 2: pop(); break;
        case 3: display(); break;
        case 4: exit(1);
        
        default: printf("invalid");
        }
    }
    
}
