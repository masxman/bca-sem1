#include <stdio.h>
#define MAX_SIZE 5 // Maximum size of the stack

int stack[MAX_SIZE]; // Declare the stack
int top = -1; // Index of the top element

void push(int element); // Function to push an element onto the stack
int pop(); // Function to pop an element from the stack
void displayStack(); // Function to display the stack

int main() {
    // Push elements onto the stack
    push(5);
    displayStack();
    push(9);
    displayStack();
    push(34);
    displayStack();
    push(17);
    displayStack();
    push(32);
    displayStack();

    // Pop three elements from the stack
    printf("Popping three elements from the stack: \n");
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}

void push(int element) {
    if(top == MAX_SIZE-1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = element;
}

int pop() {
    int element;
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    element = stack[top];
    top--;
    return element;
}

void displayStack() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

