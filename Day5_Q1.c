#include <stdio.h>

void mergeLogs(int log1[], int n1, int log2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // merge while both logs have elements
    while (i < n1 && j < n2) {
        if (log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];
        }
    }

    // copy remaining elements of log1
    while (i < n1) {
        merged[k++] = log1[i++];
    }

    // copy remaining elements of log2
    while (j < n2) {
        merged[k++] = log2[j++];
    }
}

int main() {
    int log1[] = {1, 3, 5, 7};
    int log2[] = {2, 4, 6, 8, 9};

    int n1 = sizeof(log1) / sizeof(log1[0]);
    int n2 = sizeof(log2) / sizeof(log2[0]);

    int merged[n1 + n2];

    mergeLogs(log1, n1, log2, n2, merged);

    // print merged log
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
