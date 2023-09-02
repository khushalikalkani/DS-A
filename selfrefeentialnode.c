#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    char ch;
    struct node *ptr;
};

int main(){
        struct node a, b;
        a.ch = 'A';
        a.data = 50;
        a.ptr = NULL;

        b.ch = 'a';
        b.data = 105;
        b.ptr = NULL;

        printf("A: data: %d\t char: %c",a.data,a.ch);
        printf("\nb: data: %d\t char: %c",b.data,b.ch);

        a.ptr = &b;
        b.ptr = &a;

        printf("\nb: data: %d\t char: %c\n",a.ptr -> data,a.ptr->ch);
        printf("a: data: %d\t char: %c\n",b.ptr->data,b.ptr->ch);
}