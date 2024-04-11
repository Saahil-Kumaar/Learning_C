#include <stdio.h>
int main(){
    int arr[] = {1,6,25,34};
    for (int i=0;i<=4;i++){
        switch(arr[i]){
            case 1 ... 5:
            printf("%d in range 1 to 5\n",arr[i]);
            break;
            case 6 ... 24:
            printf("%d in range 6 to 24\n",arr[i]);
            break;
            case 25 ... 35:
            printf("%d in range 25 to 35\n",arr[i]);
            break;
            default:
            printf("%d not in range\n",arr[i]);
            break;
        }
    }
    return 0;
}