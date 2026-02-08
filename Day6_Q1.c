#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0)
        return 0;

    int i = 0;  // index of last unique element

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;  // number of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    // print unique elements
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
