#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *freq = (int *)calloc(2 * MAX + 1, sizeof(int));
    int offset = MAX;

    int prefix_sum = 0;
    long long count = 0;

    freq[offset] = 1;

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        count += freq[prefix_sum + offset];

        freq[prefix_sum + offset]++;
    }

    printf("%lld\n", count);

    free(freq);
    return 0;
}