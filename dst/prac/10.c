#include <stdio.h>
#include <ctype.h>  // for isalnum()
#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char elem) {
    stack[++top] = elem;
}

char pop() {
    return stack[top--];
}

int precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char infix[50], postfix[50], ch, elem;
    int i = 0, k = 0;
    printf("Enter Infix Expression: ");
    scanf("%s", infix);
    push('#');
    while ((ch = infix[i++]) != '\0') {
        if (ch == '(') {
            push(ch);
        } else if (isalnum(ch)) {
            postfix[k++] = ch;
        } else if (ch == ')') {
            while (stack[top] != '(') {
                postfix[k++] = pop();
            }
            elem = pop();  // remove '('
        } else {
            while (precedence(stack[top]) >= precedence(ch)) {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while (stack[top] != '#') {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}

