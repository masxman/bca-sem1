#include <stdio.h>
#include <conio.h>

#define MAX_SIZE 5

int front = -1, rear = -1;
int queue[MAX_SIZE];

int isFull() {
    if (front == (rear + 1) % MAX_SIZE)
        return 1;
    else
        return 0;
}

int isEmpty() {
    if (front == -1 && rear == -1)
        return 1;
    else
        return 0;
}

void insert(int value) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    else if (isEmpty()) {
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % MAX_SIZE;
    }
    queue[rear] = value;
    printf("Inserted %d into the queue\n", value);
}

void delete() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    else if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX_SIZE;
    }
}

void display() {
	int i;
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Current queue: ");
    for (i = front; i != rear; i = (i + 1) % MAX_SIZE) {
        printf("%d ", queue[i]);
    }
    printf("%d\n", queue[i]);
}

int main() {
    insert(61);
    display();

    insert(16);
    display();

    insert(8);
    display();

    insert(27);
    display();

    delete();
    display();

    delete();
    display();

    delete();
    display();

    delete();
    display();

    return 0;
}

