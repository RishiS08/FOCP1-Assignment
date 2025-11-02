/*
Q12. Develop a C program to find the maximum and minimum scores in an array, applying
comparative logic for ranking and analysis.
*/

#include <stdio.h>

int main() {
    int n, i, arr[100], max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\nMinimum = %d", max, min);
    return 0;
}
