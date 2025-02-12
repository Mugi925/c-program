#include <stdio.h>

int main() {
    float num, result;

    // Get a number from the user
    printf("Enter a number: ");
    scanf("%f", &num);

    // Subtract 5 from the number
    result = num - 5;

    // Print the result
    printf("The result after subtracting 5 is: %.2f\n", result);

    return 0;
}
