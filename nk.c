#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n;
    char name[] = "NIK"; // The name to be displayed
    int len = strlen(name);

    printf("Enter the size of the heart (odd number, e.g., 9 or 11): ");
    scanf("%d", &n);

    // Ensure n is odd for better symmetry
    if (n % 2 == 0) {
        n++; 
    }

    // Print upper part of the heart shape
    for (i = n / 2; i <= n; i += 2) {
        // Spaces before the first peak
        for (j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        // First peak
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces between peaks
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Second peak
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Prints lower triangular part (base of the heart) with the name
    for (i = n; i >= 1; i--) {
        // Spaces before the inverted triangle
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print the name on the largest row
        if (i == n) {
            // Stars before the name
            for (j = 1; j <= (n * 2 - 1 - len) / 2; j++) {
                printf("*");
            }
            printf("%s", name); // Print the name
            // Stars after the name
            for (j = 1; j <= (n * 2 - 1 - len) / 2; j++) {
                printf("*");
            }
        } else {
            // Stars for other rows of the inverted triangle
            for (j = 1; j <= (i * 2) - 1; j++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;}
