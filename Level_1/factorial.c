/*
#include<stdio.h>
int main(){
    int a,b;
    long int c=1;
    printf("You want to find factorial of: ");
    scanf("%d",&a);
    if(a==0){
        printf("Result = 1\n");
        }
    else{
        for(b=1;b<=a;b++){
            c=c*b;
        }
        printf("factorial= %ld",c);
    } 
    return 0;
}
*/

#include<stdio.h>
int main(){
    int a,b;
    long int c=1;
    printf("You want to find factorial of: ");
    scanf("%d",&a);
    if(a==0){
        printf("Result = 1\n");
        }
    else{
        for(b=a;b>=1;b--){
            c=c*b;
        }
        printf("factorial= %ld",c);
    } 
    return 0;
}