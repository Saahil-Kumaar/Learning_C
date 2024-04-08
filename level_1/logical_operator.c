#include<stdio.h>
int main(){
    int a,b,c;
    printf("What's your age: ");
    scanf("%d",&a);
    printf("Do you have a V.I.P. Pass:\n");
    printf("Yes - 1\nNo - 0\nAnswer: ");
    scanf("%d",&b);
    if((a<=70 && a>=18)||b==1){
        printf("You can drive.\n");
    }
    else{
        printf("You can't drive.\n");
    }
}