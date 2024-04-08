 #include <stdio.h>
void display(int n)
{
    if(n%2==0){
        goto even;
    }
    else{
        goto odd;
    }
even:
    printf("%d is even.",n);
    return;
odd:
    printf("%d is odd.",n);    
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    display(n);
    return 0;
}