#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insertToEnd(int val){
    struct  Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;

    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
        return;
    }

    struct Node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=newnode;
    newnode->next=head;

}

void display(){
    if (head==NULL){
        printf("List is empty");
        return;
    }    
    struct Node* temp=head;

    while(temp->next!=head){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

void deleteFromEnd(){
    struct Node* temp=head;

    while(temp->next->next!=head){
        temp=temp->next;
    }
    struct Node* last=temp->next;
    temp->next=head;
    free(last);
}

int main(){
    insertToEnd(10);
    insertToEnd(20);
    insertToEnd(30);
    insertToEnd(40);
    display();
    deleteFromEnd();
}