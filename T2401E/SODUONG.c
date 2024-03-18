#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid element number. Exit the program.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the value of each element:\n");
    for ( i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int minPositive = -1; 
    for (i = 0; i < n; i++) {
        if (arr[i] > 0 && (minPositive == -1 || arr[i] < minPositive)) {
            minPositive = arr[i];
        }
    }

    if (minPositive == -1) {
        printf("There are no positive numbers in the array.\n");
    } else {
        printf("The smallest positive number in the array is: %d\n", minPositive);
    }

    return 0;
}

