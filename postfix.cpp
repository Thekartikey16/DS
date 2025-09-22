#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

#define MAX 100
int stack[MAX];
int top = -1;

void push(int val) {
    if(top == MAX - 1) {
        cout << "\nStack is full";
    } else {
        stack[++top] = val;
    }
}

int pop() {
    if(top == -1) {
        cout << "\nStack is empty";
        return -1;
    }
    return stack[top--];
}

int evalpostfix(char *ch) {
    for(int i = 0; ch[i] != '\0'; i++) {
        if(isdigit(ch[i])) {
            push(ch[i] - '0');
        } else {
            int val2 = pop();
            int val1 = pop();
            switch(ch[i]) {
                case '+': push(val1 + val2); 
                break;
                case '-': push(val1 - val2);
                 break;
                case '*': push(val1 * val2); 
                break;
                case '/': push(val1 / val2);
                break;
                case '^': push(pow(val1, val2)); 
                break;
            }
        }
    }
    return pop();
}

int main() {
    char arr[MAX];
    cout << "Enter the postfix expression: ";
    cin >> arr;
    int result = evalpostfix(arr);
    cout << "Result: " << result << endl;
    return 0;
}
