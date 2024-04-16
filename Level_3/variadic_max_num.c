#include<stdio.h>
#include<stdarg.h>
#include<limits.h>
int max(int count,...){
    va_list args;
    va_start(args,count);
    int max_num = INT_MIN;
    for(int i=0;i<count;i++){
        int num = va_arg(args,int);
        max_num = (num>max_num)?num:max_num;
    }
    va_end(args);
    return max_num;
}
int main(){
    printf("MAXIMUM: %d\n",max(3,10,20,30));
    printf("MAXIMUM: %d\n",max(5,4,6,9,45,87));
    return 0;
}