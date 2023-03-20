#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100 // Maximum size of the stack
#define INFIX_SIZE 100 // Maximum size of the infix expression
#define POSTFIX_SIZE 100 // Maximum size of the postfix expression

char stack[MAX_SIZE]; // Declare the stack
int top = -1; // Index of the top element

void push(char element); // Function to push an element onto the stack
char pop(); // Function to pop an element from the stack
char peek(); // Function to peek at the top element of the stack
int isOperator(char ch); // Function to check if a character is an operator
int precedence(char ch); // Function to get the precedence of an operator
void infixToPostfix(char infix[], char postfix[]); // Function to convert an infix expression to its postfix equivalent

int main() {
    char infix[INFIX_SIZE];
    char postfix[POSTFIX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("The postfix expression is: %s\n", postfix);

    return 0;
}

void push(char element) {
    if(top == MAX_SIZE-1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    top++;
    stack[top] = element;
}

char pop() {
    char element;
    if(top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    element = stack[top];
    top--;
    return element;
}

char peek() {
    if(top == -1) {
        return '\0';
    }
    return stack[top];
}

int isOperator(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        return 1;
    }
    return 0;
}

int precedence(char ch) {
    if(ch == '*' || ch == '/') {
        return 2;
    }
    else if(ch == '+' || ch == '-') {
        return 1;
    }
    else {
        return 0;
    }
}

void infixToPostfix(char infix[], char postfix[]) {
    int i, j;
    char ch;

    i = 0;
    j = 0;

    while(infix[i] != '\0') {
        if(isdigit(infix[i]) || isalpha(infix[i])) {
            postfix[j] = infix[i];
            j++;
        }
        else if(isOperator(infix[i])) {
            while(precedence(infix[i]) <= precedence(peek()) && peek() != '\0') {
                postfix[j] = pop();
                j++;
            }
            push(infix[i]);
        }
        else if(infix[i] == '(') {
            push(infix[i]);
        }
        else if(infix[i] == ')') {
            while(peek() != '(') {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        i++;
    }

    while(peek() != '\0') {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0';
}

