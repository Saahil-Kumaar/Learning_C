#include <stdio.h>
void cod(int n){
coke:
    printf("%d ",n);
    n++;
    if(n<=20){
        goto coke;
}
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    cod(n);
    return 0;
}