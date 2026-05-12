#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;
struct node* tail = NULL;

void insertBeg(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL){
        head->prev = newnode;
    } 
    else {
        tail = newnode; 
    }

    head = newnode;
}

void insertEnd(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = tail;

    if(tail != NULL){
        tail->next = newnode;
    } 
    else {
        head = newnode;  
    }
    tail = newnode;
}

void display(){
    struct node* temp = head;

    if(temp == NULL){
        printf("List is empty\n");
        return;
    }

    while(temp!= NULL){
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    //insertBeg(10);
    //insertBeg(20);
    //insertBeg(30);
    //insertBeg(40);
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    display();
    
    return 0;
}