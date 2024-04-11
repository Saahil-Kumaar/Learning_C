#include<stdio.h>
#include<stdlib.h>         
int main(){         
    int *ptr;         
    ptr=(int *) malloc(6*sizeof(int));   //will allocate memory for 6 integers
    ptr = realloc(ptr,12*sizeof(int));
    printf("%ld\n",sizeof(ptr));
    return 0;
}