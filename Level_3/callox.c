#include<stdio.h>
#include<stdlib.h>
int main(){         
    float *ptr;         
    ptr=(float *) calloc(30,sizeof(float));   //will allocate memory for 6 integers
    free(ptr);
    return 0;
}