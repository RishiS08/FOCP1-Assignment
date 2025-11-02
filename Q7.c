/*
Q7. Develop a C program to print a binary pyramid pattern.
*/

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d", j % 2);
        for (int j = i; j < n; j++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("%d", j % 2);
        printf("\n");
    }
    return 0;
}
