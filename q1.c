#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Declare an array to hold the integers
    int numbers[n];

    // Read integers from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the integers
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    // Calculate the average
    double average = (double)sum / n;

    // Print the average
    printf("The average is: %.2f\n", average);

    return 0;
}
