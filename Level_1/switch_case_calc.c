#include<stdio.h>
#include<stdlib.h>
int main(){
    char op;
    float a,b;
    printf("Enter the operator (+,-,*,/): ");
    scanf("%c",&op);
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    switch (op){
        case '+':
        printf("%f + %f = %f\n",a,b,a+b);
        break;
        case '-':
        printf("%f - %f = %f\n",a,b,a-b);
        break;
        case '*':
        printf("%f * %f = %f\n",a,b,a*b);
        break;
        case '/':
        printf("%f / %f = %f\n",a,b,a/b);
        break;
        default:
        printf("Invalid Input\n");
    }
    return 0;
}