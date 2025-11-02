/*
Q3. Design a C program to subtract two integers without using the minus (-) operator, applying
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
embedded systems or processors.
*/

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter 1st integers: ");
    scanf("%d", &x);
    printf("Enter 2nd integers: ");
    scanf("%d", &y);
    while (y != 0) {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    printf("Difference = %d",x);
    return 0;
}
