#include <stdio.h>

int main() {
    // Pointer to a variable
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Memory address of num: %p\n", ptr);

    // Modify the value using pointer
    *ptr = 11;
    printf("\nAfter modifying the value through pointer:\n");
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Memory address of num: %p\n", ptr);

    // Pointer to an array
    int array1[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8};  // Only 9 values, last element is 0
    int *arptr = array1;

    printf("\nArray elements using pointer arithmetic:\n");
    printf("First element  : %d\n", *(arptr));
    printf("Second element : %d\n", *(arptr + 1));
    printf("Third element  : %d\n", *(arptr + 2));

    // Print base address of array
    printf("Address of array1 (arptr): %p\n", (void*)arptr);

    return 0;
}
