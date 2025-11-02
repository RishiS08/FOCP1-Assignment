/*
Q10. Implement a program to find who and how many students scored “99” in the marks array,
emphasising data scanning and frequency counting.
*/

#include <stdio.h>

int main() {
    int n, i, arr[100], count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Students who scored 99: ");
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
        printf("None");
    else
        printf("\nTotal students scoring 99: %d", count);

    return 0;
}
