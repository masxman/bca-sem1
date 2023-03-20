#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100 // Maximum size of the stack
#define POSTFIX_SIZE 100 // Maximum size of the postfix expression

int stack[MAX_SIZE]; // Declare the stack
int top = -1; // Index of the top element

void push(int element); // Function to push an element onto the stack
int pop(); // Function to pop an element from the stack
int evaluatePostfix(char postfix[]); // Function to evaluate a postfix expression

int main() {
    char postfix[POSTFIX_SIZE];
    int result;
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    result = evaluatePostfix(postfix);

    printf("The result is: %d\n", result);

    return 0;
}

void push(int element) {
    if(top == MAX_SIZE-1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    top++;
    stack[top] = element;
}

int pop() {
    int element;
    if(top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    element = stack[top];
    top--;
    return element;
}

int evaluatePostfix(char postfix[]) {
    int i, operand1, operand2, result;

    i = 0;

    while(postfix[i] != '\0') {
        if(isdigit(postfix[i])) {
            push(postfix[i] - '0');
        }
        else {
            operand2 = pop();
            operand1 = pop();
            switch(postfix[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
            }
            push(result);
        }
        i++;
    }

    return pop();
}

