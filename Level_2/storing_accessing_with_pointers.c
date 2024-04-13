#include<stdio.h>
int main(){
    int arr[2][3];
    int (*ptr)[3];                  
    int (*ptr1)[2][3];    
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            arr[i][j]=i+j;
        }
    }
    ptr=arr;
    ptr1=&arr;
    printf("Value of ptr=%p\nValue of ptr1=%p\n",ptr,ptr1);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%p:\t",&(*(*(arr+i)+j)));
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}