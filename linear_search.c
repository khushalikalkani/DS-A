#include<stdio.h>
#include<stdlib.h>
#define n 15

int linearsearch(int a[], int x){
    for(int i = 0; i<n; i++){
        if(a[i] == x)
            return i;
        }
        return -1;
    
    }


int main(){
    int i, a[n], x;
    printf("random array is..\n");
    for(i = 0; i<n; i++){
        a[i] = (rand() % 50) + 1;
        printf("%d ", a[i]);
    }
    printf("\nEnter a element");
    scanf("%d",&x);

   int m =  linearsearch(a, x);
   if(m == -1)
        printf("Element is not found");
   else
        printf("Element is found at %d", m);
}