/* \0 - used as a null char at end of string */
#include<stdio.h>
int main(){
    char str[]="Sahil";
    char new[]={'s','a','h','i','l','\0'};
    printf("%s\n",str);
    printf("%s\n",new);
    return 0;
}