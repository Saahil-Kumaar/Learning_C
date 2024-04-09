#include<stdio.h>
int main(){
    int i=3;
    int **ptr;
    ptr = &i;
    printf("Adress of pointer pointing at initial pointer is: %u\n",ptr);
}