/*Array of Fibonacci Series*/
#include<stdio.h>
int main(){
    int lope[10];
    lope[0]=0;
    lope[1]=1;
    lope[2]=1;
    for(int i=1;i<10;i++){
        lope[i]=i+lope[i-1];
    }
    for(int i=1;i<10;i++){
        printf("value: %d\n",lope[i]);
    }
    return 0;
}