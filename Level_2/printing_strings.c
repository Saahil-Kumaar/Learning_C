#include<stdio.h>
int main(){
    char str[]={'s','a','h','i','l','\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}