#include<stdio.h>
#include<stdlib.h>         
int main(){         
    unsigned int *ptr;         
    ptr=(int *) malloc(6*sizeof(int));   //will allocate memory for 6 integers
    printf("adress = %u\n",ptr); 
    return 0;
}
