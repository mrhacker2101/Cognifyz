#include <stdio.h>

int main() {
    int num_terms;
    long long int first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num_terms);

    // Display the Fibonacci series
    printf("Fibonacci Series up to %d terms:\n", num_terms);
    printf("%lld, %lld, ", first, second);

    for (int i = 2; i < num_terms; i++) {
        next = first + second;
        printf("%lld, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}