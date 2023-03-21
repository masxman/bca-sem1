#include <stdio.h>
#include <conio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Inserted %d into queue\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted %d from queue\n", queue[front]);
        front++;
    }
}

void display() {
	int i;
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue contains: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(61);
    display();
    enqueue(16);
    display();
    enqueue(8);
    display();
    enqueue(27);
    display();
    
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    
    getch();
    return 0;
}

