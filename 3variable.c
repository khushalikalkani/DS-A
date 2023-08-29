#include<stdio.h>

//AND -> first digit 0 than no ckeck condition;
//OR -> first digit 1 than no ckeck condition;

int main(){
    int a = 1, b = 2, c = 1, d;
    // d = a || --b || c;
    //printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);
     //d = a && --b && c;
    // printf("\na: %d, b: %d, c: %d, d: %d",a,b,c,d);
     //d = --a && --b && c;
     //printf("\na: %d, b: %d, c: %d, d: %d",a,b,c,d);
     d = --a || --b && c;
     printf("\na: %d, b: %d, c: %d, d: %d",a,b,c,d);
   
}