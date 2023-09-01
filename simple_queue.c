#include<stdio.h>
#define  n 10

int a[n], f = -1, r = -1;
int Display(){
    if(f<0){
        printf("Array is empty.....");
    }else{
        for(int i = f; i<=r; i++){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}

int insertEnd(int val){
    if(r >= n-1){
        printf("queue is full...");
    }else if(r < 0){
        f = r = 0;
        a[r] = val;
    }else{
        r++;
        a[r] = val;
    }
}

int Deletefirst(){
    if(f<0){
        printf("Queue is empty...");
    }else if(f == r){
        f = r = -1;
    }
    else{
        f++;
    }
}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    Display();
    Deletefirst();
    Deletefirst();
    Display();
}