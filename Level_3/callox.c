#include<stdio.h>
#include<stdlib.h>
int main(){         
    float *ptr;         
    ptr=(float *) calloc(30,sizeof(float));   //will allocate memory for 6 integers and initiallize each byte with value 0 unlike malloc
    free(ptr);
    return 0;
}