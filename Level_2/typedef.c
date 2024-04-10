#include <stdio.h>
#include <string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

int main(){ 
    emp e1;
    e1.code = 100;
    e1.salary = 34.45;
    strcpy(e1.name,"Harry");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n\n",e1.name);
}