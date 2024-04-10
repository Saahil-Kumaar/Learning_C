#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=2,b=3;
    FILE *ptr;
    ptr=fopen("matriz.txt","r");
    fprintf(ptr,"%d %d",a,b);
    fclose(ptr);
    return 0;

}