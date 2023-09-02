#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = val;
    temp -> next = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr -> next != Null)
    
}