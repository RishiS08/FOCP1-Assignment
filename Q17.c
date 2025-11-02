/*
Q17. Design a C program to delete an element from the front, middle, or end of an array, and print
the array before and after deletion.
*/

#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nArray before deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nWhere to delete?\n1. Front\n2. Middle\n3. End\nEnter choice: ");
    int choice;
    scanf("%d", &choice);

    if (n == 0) {
        printf("Array is empty, cannot delete!\n");
        return 0;
    }

    if (choice == 1) pos = 0;          
    else if (choice == 2) pos = n / 2;
    else if (choice == 3) pos = n - 1; 
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}