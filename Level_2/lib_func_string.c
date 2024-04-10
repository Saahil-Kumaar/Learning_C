#include<stdio.h>
#include<string.h>
int main(){
  /*char *st="Hello";
    char st1[45];
    char *st2="Sahil";

    int a =strlen(st);
    printf("The length of string: %d\n\n",a);
    strcpy(st1,st);
    printf("Copied value of st in st1 is: %s\n",st1);
    strcat(st1,st2);
    printf("Concatanated value: %s\n",st1); //st2 will be concated in st1 and hence stored in it too.*/

/* Comparing to char values. */
    char str3[]="Hella";
    char str4[]="Hellb";
    char str5[]="Hellc";
    char str6[]="Hella";
    int val1=strcmp(str4,str3);
    int val2=strcmp(str4,str5);
    int val3=strcmp(str3,str6);
    printf("Difference of Hellb & Hella: %d\n",val1);
    printf("Difference of Hellb & Hellc: %d\n",val2);
    printf("Difference of Hella & Hella: %d\n",val3);
    /* Shows difference of ASCII Values of first mismatching character. */
    
    return 0;
}