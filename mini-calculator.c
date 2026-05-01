#include <stdio.h>

int main(void) {
    float num1, num2, answer;
    int option;

   // INPUT
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // OPTIONS
    printf("\nChoose an operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("4. DIVIDE\n");
    printf("Enter option (1-4): ");
    scanf("%d", &option);

    // IF ELSE logic
    if (option == 1) {
        answer = num1 + num2;
        printf("Answer = %.2f\n", answer);
    }
    else if (option == 2) {
        answer = num1 - num2;
        printf("Answer = %.2f\n", answer);
    }
    else if (option == 3) {
        answer = num1 * num2;
        printf("Answer = %.2f\n", answer);
    }
    else if (option == 4) {
        if (num2 == 0) {
            printf("Math Error: Cannot divide by 0\n");
        } else {
            answer = num1 / num2;
            printf("Answer = %.2f\n", answer);
        }
    }
    else {
        printf("Invalid option selected\n");
    }

    return 0;
}
