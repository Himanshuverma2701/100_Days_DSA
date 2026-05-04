#include <stdio.h>

int main()
{
    int n, i;
    int queue[100];
    int stack[100];
    int top = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &queue[i]);
    }
    for(i = 0; i < n; i++)
    {
        stack[++top] = queue[i];
    }
    for(i = 0; i < n; i++)
    {
        queue[i] = stack[top--];
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}