#include<stdio.h>
 
int main(){
    int arr[2][3]={{0,1,2},{3,4,5}};
    int (*ptr)[3];                  
    int (*ptr1)[2][3];
    ptr=arr;
    ptr1=&arr;
    printf("Value of ptr=%p\nValue of ptr1=%p\n",ptr,ptr1);
    //Accessing elements of Multidimensional arrays using Pointers
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%p:\t",&(*(*(arr+i)+j)));
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }//In Output we can see the address of individual element in an array along with its value.
     //We can also see that address of whole array is same as adress of its first element
    return 0;
}
