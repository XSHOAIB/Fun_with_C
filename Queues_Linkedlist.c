--> QUEUE USING LINKEDLIST

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int ele){
    struct node *new;
    new =(struct node*)malloc(sizeof(struct node));
    if(new == NULL){
        printf("\nOverFlow");
        return;
    }
    new->data=ele;
    new->next=NULL;
    if(rear==NULL){
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
    printf("\nenqueue element: %d",rear->data);
}
void dequeue(){
    if(front == NULL){
        printf("\nunderflow");
        return;
    }
    int dequeued=front->data;
    struct node *temp=front;
    front = front -> next;
    free(temp);
    printf("dequeue done");
}
void displayQueue(){
    if(front==NULL){
        printf("\nunderflow");
        return;
    }
    struct node *display=front;
    while(display!=NULL){
        printf("\n| %d |",display->data);
        display=display->next;
    }
}
int main(){
    int ch,ele;
    while(1){
        printf("\nenter the operation to be done:");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("\nenter element to enqueue:");
                   scanf("%d",&ele);
                   enqueue(ele);
                   break;
            case 2:dequeue();break;
            case 3:displayQueue();break;
            case 4:exit(0);
            default:printf("invalid");break;
        }
    }
    return 0;
}
