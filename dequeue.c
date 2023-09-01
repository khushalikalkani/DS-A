#include<stdio.h>
#define n 5

int a[n], f = -1, r = -1;
int Display(){
    if(f<0){
        printf("queue is empty...");
    }else{
        for(int i = f; i <= r; i++){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
int insertEnd(int val){
    if(r >= n-1){
        printf("Queue is full");
    }else if(r<0){
        f = r = 0;
        a[r] = val;
    }else{
        r++;
        a[r] = val;
    }
}
int insertfirst(int val){
    if(f == 0){
        printf("Not insert at that time");
    }else if(f < 0){
        f = r = 0;
        a[f] = val;
    }else{
        f--;
        a[f] = val;
    }
}
 int deleteEnd(){
    if(f > n-1){
        printf("queue is empty");
    }else if(f == r){
        f = r = 0;
        a[r];
    }else{
        r--;
        a[r];
    }
 }
int deletefirst(){
    if(f<0){
        printf("queue is empty...");
    }else if(f == r){
        f = r = -1;
    }else{
        f++;
    }
}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    // insertEnd(40);
    // insertEnd(50);
    Display();
    deletefirst();
    deletefirst();
    Display();
    insertfirst(100);
    insertfirst(200);
    // insertfirst(300);
    Display();
    deleteEnd();
    Display();
}

