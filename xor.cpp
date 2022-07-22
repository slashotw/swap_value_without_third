#include<stdio.h>
int main(){
    // initialize
    int a=1010 ;
    int b=1100 ;
    // three times xor
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b ;
    // result
    printf("a= %d ; b= %d ",a,b);
}
