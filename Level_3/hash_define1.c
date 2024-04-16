#include<stdio.h>
#define pi 3.14159265359
int main(){
    float radius,area;
    printf("To find AREA of CIRCLE:\n");
    printf("Enter value of radius: ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("AREA: %f",area);
}