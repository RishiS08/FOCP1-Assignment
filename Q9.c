/*
Q9. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
search and data retrieval techniques.
*/

#include <stdio.h>

int main() {
    int n, i, arr[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence of 99 is at index %d", i);
            return 0;
        }
    }
    printf("99 not found in the array");
    return 0;
}
