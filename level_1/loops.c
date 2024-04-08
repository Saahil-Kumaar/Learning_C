/*
while: pehle condition fir execution
do-while: execute atleast once
for-loop: start, finish, step
*/

//While Loop//

/*
#include<stdio.h>
int main(){
    int a,b;
    int i=1;
    printf("You want to find first 10 multiples of: ");
    scanf("%d",&a);
    while (i<=10){
        b=a*i;
        printf("%d * %d = %d\n",i,a,b);
        i+=1;
    }
    return 0;
}
*/

//do-while lopp//

/*
#include<stdio.h>
int main(){
    int a,b;
    int i=1;
    printf("You want to find first 10 multiples of: ");
    scanf("%d",&a);
    do{
        b=a*i;
        printf("%d * %d = %d\n",i,a,b);
        i+=1;
    }while(i<=10);
    return 0;

}
*/

#include<stdio.h>
int main(){
    int a,b;
    int i=1;
    printf("You want to find first 10 multiples of: ");
    scanf("%d",&a);
    for(i;i<=10;i++){
        b=a*i;
        printf("%d * %d = %d\n",i,a,b);
    }
    return 0;
}