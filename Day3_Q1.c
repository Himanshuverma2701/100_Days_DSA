#include <stdio.h>

int main() {
    int n, k;
    int arr[100];
    int comparisons = 0;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            printf("Key found at position %d\n", i + 1); 
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Key not found\n");
    }

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
