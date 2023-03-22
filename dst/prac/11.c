#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 6

int queue[MAX]; // array declaration
int front = -1;
int rear = -1;

// function to insert an element in a circular queue
void enqueue(int element)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue is overflow..");
    }
    else if (front == -1 && rear == -1) // condition to check queue is empty
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
        queue[rear] = element;
    }
    else
    {
        rear++;
        queue[rear] = element;
    }
}

// function to delete the element from the queue
int dequeue()
{
    int deleted_element;
    if (front == -1 && rear == -1) // condition to check queue is empty
    {
        printf("\nQueue is underflow..");
        return -1;
    }
    else if (front == rear)
    {
        deleted_element = queue[front];
        printf("\nThe dequeued element is %d", deleted_element);
        front = -1;
        rear = -1;
        return deleted_element;
    }
    else
    {
        deleted_element = queue[front];
        printf("\nThe dequeued element is %d", deleted_element);
        front = (front + 1) % MAX;
        return deleted_element;
    }
}

// function to display the elements of a queue
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nElements in a Queue are : ");
        do
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        } while (i != (rear + 1) % MAX);
    }
}

int main()
{
    int choice = 1, x; // variables declaration
    while (choice != 0) // while loop
    {
        printf("\n Press 1: Insert an element");
        printf("\nPress 2: Delete an element");
        printf("\nPress 3: Display the element");
        printf("\nPress 0: Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element which is to be inserted: ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("\nExiting...");
            exit(0);
        default:
            printf("\nInvalid choice!");
        }
        getch();
    }
    return 0;
}

