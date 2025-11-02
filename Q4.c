/*
Q4. Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management.
*/

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Method 1: Using temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("Temp Var Swap: a=%d, b=%d\n", a, b);

    // Method 2: Using arithmetic
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Arithmetic Swap: a=%d, b=%d\n", a, b);

    // Method 3: Using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("XOR Swap: a=%d, b=%d\n", a, b);

    // Method 4: Using pointers
    int *p1 = &a, *p2 = &b, temp2;
    temp2 = *p1;
    *p1 = *p2;
    *p2 = temp2;
    printf("Pointer Swap: a=%d, b=%d\n", a, b);

    return 0;
}
