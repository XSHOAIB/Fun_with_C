--> LINKED LIST IMPLEMENTATION.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    
    struct node *node1 = (struct node*)malloc(sizeof(struct node));
    struct node *node2 = (struct node*)malloc(sizeof(struct node));
    struct node *node3 = (struct node*)malloc(sizeof(struct node));
    struct node *node4 = (struct node*)malloc(sizeof(struct node));
    struct node *node5 = (struct node*)malloc(sizeof(struct node));
    
    node1->data = 100;
    node2->data = 200;
    node3->data = 300;
    node4->data = 400;
    node5->data = 500;
    
    struct node *head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    
}
