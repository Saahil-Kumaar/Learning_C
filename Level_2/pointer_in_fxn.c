#include<stdio.h>
//while declaring a pointer inside a function we must make the variable static.
int* ptr(){
        static int a=3;
        return(&a);
    } 
int main(){
    int* ptr1;
    ptr1=ptr();
    printf("%p\n",ptr1);
    printf("%d\n",*ptr1);
    return 0;
}