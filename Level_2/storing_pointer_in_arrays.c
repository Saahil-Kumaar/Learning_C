#include<stdio.h>
 
int main(){
    int arr[2][3];
    int *(arr1)[2][3];

    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            arr[i][j]=i+j;
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            arr1[i][j]=&arr[i][j];
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",*arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}