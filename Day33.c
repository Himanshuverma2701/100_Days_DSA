#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evalRPN(char** tokens, int tokensSize) {
    int* stack = (int*)malloc(sizeof(int) * tokensSize);
    int top = -1;

    for (int i = 0; i < tokensSize; i++) {
        char* s = tokens[i];
        if (strlen(s) > 1 || (s[0] >= '0' && s[0] <= '9')) {
            stack[++top] = atoi(s);
        } else {
            int b = stack[top--];
            int a = stack[top--];
            switch (s[0]) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        }
    }
    int result = stack[top];
    free(stack);
    return result;
}

int main() {
    char* tokens[] = {"2", "1", "+", "3", "*"};
    int size = 5;
    printf("Result: %d\n", evalRPN(tokens, size));
    return 0;
}