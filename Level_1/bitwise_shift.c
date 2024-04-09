#include<stdio.h>
int main(){
    unsigned char a,b,c;
    a=10;
    b=a>>1;   //right shifted to one place(/2)
    c=a<<1;   //left shifted to one place(*2)
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
