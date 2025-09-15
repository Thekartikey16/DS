#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int stack[100], top = -1;

void push(int val) {
    stack[++top] = val;
}
int pop() {
    return stack[top--];
}

int main() {
    char expr[] = "2 4 + 9 4 ^ *";
    char *token = strtok(expr, " ");

    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            push(atoi(token));
        } else {
            int b = pop();
            int a = pop();

            if (strcmp(token, "+") == 0) {
                push(a + b);
            } else if (strcmp(token, "-") == 0) {
                push(a - b);
            } else if (strcmp(token, "*") == 0) {
                push(a * b);
            } else if (strcmp(token, "/") == 0) {
                push(a / b);
            } else if (strcmp(token, "^") == 0) {
                push(a ^ b); 
            } else {
                printf("Unknown operator: %s\n", token);
                return 1;
            }
        }
        token = strtok(NULL, " ");
    }

    printf("Result: %d\n", pop());
    return 0;
}