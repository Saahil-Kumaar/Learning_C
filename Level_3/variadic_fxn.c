#include<stdio.h>
#include<stdarg.h>
void printnum(int size,...){
    int i,value;
    va_list args;           //initially args represents pointer to first argument
    va_start(args,size);    //now args represents pointer to (size) number of arguments
    for(i=0;i<size;i++){
        value=va_arg(args,int); //it represents that argument are type of int but can acees only one at a time
        printf("%d ",value);
    }
    va_end(args);
    printf("\n");
}
int main(){
    printnum(4,1,2,3,4);    //first number show how many arguments are we gonna pass to function
    printf("\n");
    return 0;
} 