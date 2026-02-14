:i

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Bitwise operations
    int andr = num1 & num2;
    printf("\nBitwise AND (&): %d & %d = %d", num1, num2, andr );// 1 if both 1  ...0 if any one 0

    int orr = num1 | num2;
    printf("\nBitwise OR  (|): %d | %d = %d", num1, num2, orr);// 1 if any one is 1 else 0 

    int xorr = num1 ^ num2;
    printf("\nBitwise XOR (^): %d ^ %d = %d", num1, num2, xorr);//if both same than 0 if diff then 1

    printf("\nBitwise NOT (~) on first number: ~%d = %d", num1, ~num1);//opposite or negation

    printf("\nBitwise NOT (~) on second number: ~%d = %d", num2, ~num2);

    return 0;
}
