#include <stdio.h>
int main() {
    float number, quotient;
    printf("Enter a number: ");
    scanf("%f", &number);
    quotient = number / 6;
    printf("The quotient when %.2f is divided by 6 is: %.2f\n", number, quotient);
    return 0;
}
