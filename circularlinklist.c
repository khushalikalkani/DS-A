#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head =  NULL;

void Display(){
    struct node *ptr = head;
    if(head == NULL)
        printf("List is empty...");
    else{
        while(ptr -> next != head)
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d ",ptr ->data);
    }
    printf("\n");
}

void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp ->data = val;
   

    if(head == NULL){
        head = temp;
        temp -> next = head;
        return;
    }
    while(ptr -> next != head)
    {
        ptr = ptr -> next;
    }
    ptr ->  next = temp;
    temp -> next = head;
    return;
}

void insertfirst(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = val;
   
    if(head == NULL){
        head = temp;
        temp -> next = head;
        return;
    }

    while(ptr -> next != head)
    {
        ptr = ptr -> next;
    }
     ptr ->next = temp;
     temp ->next = head;
     head = temp;
    return;
}

void deletefirst(){
    struct node *ptr = head;
    struct node *p = head;
   
    if(head -> next == NULL){
        head = NULL;
        free(ptr);
        return;
    }

    while(ptr -> next != head){
       
        ptr = ptr -> next;
    }
    ptr -> next = p ->next;
    head = p -> next;
    free(p);
    return;
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
    return;

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

void deleteEnd(){
    struct node *ptr = head;
    struct node *p;

    if(head -> next == head){
        head = NULL;
        free(ptr);
        return;
    }

    while(ptr -> next != head){
        p = ptr;
        ptr = ptr -> next;
    }
    p -> next = head;
    free(ptr);
    return;
}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    Display();
    deleteEnd();
    deleteEnd();
    Display();
    insertfirst(1500);
    Display();
    deletefirst();
    Display();
}