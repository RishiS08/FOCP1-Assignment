/*
Q13. Design a C program to find a peak element that is not smaller than its neighbours.
*/

#include <stdio.h>

int main() {
    int n, i, arr[100];
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i-1]) && (i == n-1 || arr[i] >= arr[i+1])) {
            printf("A peak element is %d at index %d", arr[i], i);
            return 0;
        }
    }
    return 0;
}
