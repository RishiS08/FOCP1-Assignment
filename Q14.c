/*
Q14. Develop a C program to count the number of prime numbers in an array.
*/

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, i, arr[100], count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        if (isPrime(arr[i])) count++;

    printf("Number of prime numbers = %d", count);
    return 0;
}
