#include <stdio.h>
#include <stdarg.h>
int getMaxFromUser(int count);

int main() {
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int max = getMaxFromUser(n);
    printf("Maximum number is: %d\n", max);
    return 0;
}
int getMaxFromUser(int count) {
    printf("Enter %d numbers:\n", count);
    int max = 0;
    for (int i = 0; i < count; i++) {
        int num;
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    return max;
}
