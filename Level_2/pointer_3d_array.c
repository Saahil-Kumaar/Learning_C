#include<stdio.h>
 int main(){
    int arr[2][2][3]={{{0,1,2},
                      {3,4,5}},
                      {{6,7,8},
                      {9,10,11}}};
    int (*ptr)[2][3];                  
    int (*ptr1)[2][2][3];
    ptr=arr;
    ptr1=&arr;
    printf("Value of ptr=%p\nValue of ptr1=%p\n",ptr,ptr1);
    //Accessing elements of Multidimensional arrays using Pointers
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("%p:\t",&(*(*(*(arr+i)+j)+k)));
                printf("%d\t",*(*(*(arr+i)+j)+k));
            }
        }
        printf("\n");
    }//In Output we can see the address of individual element in an array along with its value.
     //We can also see that address of whole array is same as adress of its first element
    return 0;
}