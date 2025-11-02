/*
Q11. Develop a C program to traverse an array of scores, determine whether each score is even or
odd using conditional logic, and store them into two separate arrays — even_array and odd_array.
*/

#include <stdio.h>

int main() {
    int n, i, arr[100], even[100], odd[100];
    int e = 0, o = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even numbers: ");
    for (i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers: ");
    for (i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
