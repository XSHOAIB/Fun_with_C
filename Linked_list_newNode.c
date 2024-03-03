--> LINKED LIST NEW NODE.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *newNode(int data,struct node *nextNode){
     
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = nextNode;
    return temp;
    
}

int main(){
    
    struct node *head = newNode(100,newNode(200, newNode(300,newNode(400, newNode(500, NULL)))));
    
    struct node *ptr = head;
    
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}
