#include<stdio.h>
int main(){
    int arr[5]={0,1,2,3,4};
    int *ptr;                   //Pointer for integer
    int (*ptr1)[5];             //Pointer for array
    ptr=arr;                    //Pointer to first element of array
    ptr1=&arr;                  //Pointer to whole array 
    printf("Value of ptr=%p\nValue of ptr1=%p\n",ptr,ptr1);
    //Will return same result for both adresses as adress
    //of array is same as adress of its first element.

}