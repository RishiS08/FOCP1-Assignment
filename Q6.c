/*
Q6. Create a C program that allows the user to convert between Binary and Decimal systems based
on their choice, showcasing understanding of data encoding and computer number systems used in
hardware-level design.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        int decimal = 0, i = 0, rem;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);

        while (binary != 0) {
            rem = binary % 10;
            binary /= 10;
            decimal += rem * pow(2, i);
            ++i;
        }
        printf("Decimal = %d", decimal);
    } else if (choice == 2) {
        int decimal;
        long long binary = 0;
        int rem, i = 1;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while (decimal != 0) {
            rem = decimal % 2;
            decimal /= 2;
            binary += rem * i;
            i *= 10;
        }
        printf("Binary = %lld", binary);
    } else {
        printf("Invalid choice!");
    }

    return 0;
}
