#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void display(){
    struct node *ptr = head;
    if(head == NULL){
        printf("List is Empty...");
    }else{
        while(ptr != NULL){
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
    }
    printf("\n");
}

void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr -> next != NULL){
        ptr = ptr ->next;
    }
    ptr -> next = temp;
    temp -> prev = ptr;
    return;
}

void deleteEnd(){
    struct node *ptr = head;
    struct node *p;

    if(head -> next == NULL){
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr ->next != NULL){
        p = ptr;
        ptr = ptr -> next;
    }
    p -> next = NULL;
    free(ptr);
    return;
    }

void insertfirst(int val){

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = val;  
    
    if(head == NULL){
        head = temp;
        temp -> next = NULL;
        temp ->  prev = NULL;
        return;
    }
     temp -> next = ptr;
     ptr ->prev = temp;
     head = temp;
    
    return;
}

void deletefirst(){
     struct node *ptr = head;
   
    if(head = ptr -> next){
        free(ptr);
        return;
    }


}

void midinsert(int val, int position){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = val;


    while(ptr -> data != position)
    {
        ptr = ptr -> next;
    }
    temp -> next = ptr -> next;
    ptr -> next = temp;

}

void middelete(int position){
    struct node *ptr = head;
    struct node *p;

 while(ptr -> data != position){
        p = ptr;
        ptr = ptr -> next;
    }
    p -> next = ptr -> next;
    free(ptr);
    return;

}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    display();
    // deleteEnd();
    // display();
    insertfirst(100);
    display();
}