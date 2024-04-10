#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){

    /* Entering values to a structure */
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.45;
    strcpy(e1.name,"Harry");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n\n",e1.name);

    /* One-Liner to enter tthe data */
    struct employee e2={101,54.6,"Anesh"};
    printf("%d\n",e2.code);
    printf("%f\n",e2.salary);
    printf("%s\n\n",e2.name);

    /* Default value to be 0 */
    struct employee e3={0};
    printf("%d\n",e3.code);
    printf("%f\n",e3.salary);
    printf("%s\n",e3.name);

    return 0;

}