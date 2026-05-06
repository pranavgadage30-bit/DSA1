//LINKED LIST -- INSERT BEGINING
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insertBeg(int val){
    //malloc
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}

void display(){
    if (head==NULL){
        printf("List is empty");
        return;
    }
    //head=a400
    struct Node* temp=head;

    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void deleteFromBeg(){
    if (head==NULL){
        printf("List is empty");
        return;
    }

    struct Node* temp=head;
    head=temp->next;

    free(temp);
    printf("\nDeleted Successfully\n");
}

void deleteFromEnd(){
    if (head==NULL){
        printf("List is empty");
        return;
    }
    struct Node* temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    struct Node* temp1=temp->next;
    temp->next=NULL;
    free(temp1);
    print("\nDeleted Successfully\n");
}

void deleteFromPos(int pos){
    int i;
    struct Node* temp=head;
    for(i=1;i<pos-1;i++){
        temp=temp->next;
    }
    struct Node* temp1=temp->next;
    temp->next=temp->next->next;
    free(temp1);
    printf("\nDelete Successfully\n");
}

int main(){
    insertBeg(10);
    insertBeg(20);
    insertBeg(30);
    insertBeg(40);
    display();
    //deleteFromBeg();
    //deleteFromEnd();
    deleteFromPos(2);
    display();
}

//----------------------------------------------------------------------
//LINKED LIST -- INSERT ENDING
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insertEnd(int val){
    //malloc
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=NULL;


if(head==NULL){
    head=newnode;
    return;
}

struct Node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}

temp->next=newnode;

}

void display(){
    if (head==NULL){
        printf("List is empty");
        return;
    }
    //head=a400
    struct Node* temp=head;

    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    display();
}