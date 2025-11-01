#include <stdio.h>
#define PI 3.14
int main() {
    float r, area, circum;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    circum = 2 * PI * r;
    printf("Area = %.2f\nCircumference = %.2f", area, circum);
    return 0;
}

