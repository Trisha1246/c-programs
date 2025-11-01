#include <stdio.h>
int main() {
    int n, rem, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if (temp == sum)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    return 0;
}

