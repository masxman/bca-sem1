#include <stdio.h>

#define MAXSIZE 8

int stack[MAXSIZE];
int top = -1;

int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;
    if (!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
        return -1;
    }
}

int push(int data) {
    if (!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

int main() {
	int i,data;
    // push items on to the stack
    push(5);
    push(9);
    push(34);
    push(17);
    push(32);

    printf("Element at top of the stack: %d\n", peek());
    printf("Elements: \n");

    // pop items from the stack
    for (i = 0; i < 3; i++) {
        data = pop();
        if (data != -1) {
            printf("%d\n", data);
        }
    }

    printf("Stack full: %s\n", isfull() ? "true" : "false");
    printf("Stack empty: %s\n", isempty() ? "true" : "false");

    return 0;
}

