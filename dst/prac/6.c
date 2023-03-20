#include <stdio.h>
#define MAX_SIZE 5 // Maximum size of the queue

int queue[MAX_SIZE]; // Declare the queue
int front = -1; // Index of the front element
int rear = -1; // Index of the rear element

void insert(int element); // Function to insert an element into the queue
int delete(); // Function to delete an element from the queue
void displayQueue(); // Function to display the queue

int main() {
    // Insert elements into the queue
    printf("Inserting elements into the queue: \n");
    insert(61);
    displayQueue();
    insert(16);
    displayQueue();
    insert(8);
    displayQueue();
    insert(27);
    displayQueue();

    // Delete four elements from the queue
    printf("Deleting four elements from the queue: \n");
    delete();
    displayQueue();
    delete();
    displayQueue();
    delete();
    displayQueue();
    delete();
    displayQueue();

    return 0;
}

void insert(int element) {
    if((front == 0 && rear == MAX_SIZE-1) || (front == rear+1)) {
        printf("Queue Overflow\n");
        return;
    }
    else if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = element;
    }
    else if(rear == MAX_SIZE-1 && front != 0) {
        rear = 0;
        queue[rear] = element;
    }
    else {
        rear++;
        queue[rear] = element;
    }
}

int delete() {
    int element;
    if(front == -1) {
        printf("Queue Underflow\n");
        return -1;
    }
    element = queue[front];
    if(front == rear) {
        front = rear = -1;
    }
    else if(front == MAX_SIZE-1) {
        front = 0;
    }
    else {
        front++;
    }
    return element;
}

void displayQueue() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    if(front <= rear) {
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    else {
        for(int i = front; i < MAX_SIZE; i++) {
            printf("%d ", queue[i]);
        }
        for(int i = 0; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

