#include <stdio.h>
void display(int n){
    if(n%2==0){
        printf("%d is an even number.",n);
    }
    else{
        printf("%d is an odd number.",n);
    }

}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    display(n);
    return 0;
}