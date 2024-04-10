#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr =&e1;
    ptr->code=102;
    ptr->salary=34.876;
    strcpy(ptr->name,"Harry");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n\n",e1.name);
}