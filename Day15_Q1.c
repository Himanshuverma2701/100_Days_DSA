#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum = 0;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int n = r < c ? r : c;

    for (int i = 0; i < n; i++)
        sum += a[i][i];

    printf("%d", sum);

    return 0;
}
