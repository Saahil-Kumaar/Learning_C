/*
Skipping a number in a list.
*/
#include <stdio.h>
int main(){
    int a,b,i;
    printf("Enter number of elemet you want to print series of: ");
    scanf("%d",&a);
    printf("You want to dissappear which value: ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        if(i==b){
            continue;
        }
        printf("%d\n",i);
    }
}