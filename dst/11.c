#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

void enqueue(int d) {
  // Create a new node
  struct node *n = (struct node *)malloc(sizeof(struct node));
  n->data = d;
  n->next = NULL;

  // Insert the new node into the queue
  if (f == NULL && r == NULL) {
    // If the queue is empty, set the front and rear pointers to the new node
    f = r = n;
    r->next = f;
  } else {
    // Otherwise, insert the new node at the rear of the queue and update the rear pointer
    r->next = n;
    r = n;
    n->next = f;
  }
}

void dequeue() {
  // Delete the front node from the queue
  struct node *t = f;
  if (f == NULL && r == NULL) {
    // If the queue is empty, print an error message
    printf("\nQueue is empty");
  } else if (f == r) {
    // If there is only one node in the queue, set the front and rear pointers to NULL
    f = r = NULL;
    free(t);
  } else {
    // Otherwise, update the front pointer and set the next pointer of the rear node to the new front node
    f = f->next;
    r->next = f;
    free(t);
  }
}

void print() {
  // Print the elements of the queue
  struct node *t = f;
  if (f == NULL && r == NULL) {
    // If the queue is empty, print an error message
    printf("\nQueue is empty");
  } else {
    // Otherwise, traverse the queue and print the data of each node
    do {
      printf("\n%d", t->data);
      t = t->next;
    } while (t != f);
  }
}

int main(void) {
  int opt, n, i, data;
  printf("Enter Your Choice:");
  do {
    printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue\n3 for Delete the data from the Queue\n0 for Exit");
    scanf("%d", &opt);
    switch (opt) {
      case 1:
        printf("\nEnter the number of data: ");
        scanf("%d", &n);
        printf("\nEnter your data: ");
        i = 0;
        while (i < n) {
          scanf("%d", &data);
          enqueue(data);
          i++;
        }
        break;
      case 2:
        print();
        break;
      case 3:
        dequeue();
        break;
      case 0:
        break;
      default:
        printf("\nIncorrect choice");
    }
  } while (opt != 0);
 
int peek() {
  // Return the data of the front node without deleting it
  if (f == NULL && r == NULL) {
    printf("\nQueue is empty");
    return -1;
  } else {
    return f->data;
  }
}

int is_empty() {
  // Return 1 if the queue is empty, 0 otherwise
  return (f == NULL && r == NULL);
}

int main(void) {
  int opt, n, i, data;
  printf("Enter Your Choice:");
  do {
    printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue\n3 for Delete the data from the Queue\n4 for Peek the data from the Queue\n5 for Check the Queue is Empty or not\n0 for Exit");
    scanf("%d", &opt);
    switch (opt) {
      case 1:
        printf("\nEnter the number of data: ");
        scanf("%d", &n);
        printf("\nEnter your data: ");
        i = 0;
        while (i < n) {
          scanf("%d", &data);
          enqueue(data);
          i++;
        }
        break;
      case 2:
        print();
        break;
      case 3:
        dequeue();
        break;
      case 4:
        data = peek();
        if (data != -1) {
          printf("\nThe front element of the queue is %d", data);
        }
        break;
      case 5:
        if (is_empty()) {
          printf("\nThe queue is empty");
        } else {
          printf("\nThe queue is not empty");
        }
        break;
      case 0:
        break;
      default:
        printf("\nIncorrect choice");
    }
  } while (opt != 0);
  return 0;
}
}
