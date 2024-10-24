#include <stdio.h>

void findLargest(int *numbers, int n, int *largest) {
    *largest = numbers[0];  // Assume the first number is the largest initially

    for (int i = 1; i < n; i++) {
        if (numbers[i] > *largest) {
            *largest = numbers[i];
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    int *largest;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = &numbers[0];  // Initialize the pointer to the first element
    findLargest(numbers, n, largest);

    printf("The largest number is: %d\n", *largest);

    return 0;
}
 