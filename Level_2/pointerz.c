#include<stdio.h>
int main(){
    int i=3;
    int *j;
    j=&i;
    printf("Unsigned DecimalAdress of %d is %u\n",i,j);
    printf("Adress of %d is %p\n",i,j);
    printf("Unsigned Hexa-Decimal Adress of %d is %x\n",i,j);
    return 0;
}