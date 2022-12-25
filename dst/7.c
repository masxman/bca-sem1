#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
  int data;
  struct Node* next;
};

// Function to create a new node with the given data and insert it
// in the correct position in the sorted list
void insert(struct Node** head, int data) {
  // Create a new node
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  // If the list is empty or the new node should be inserted at the beginning
  if (*head == NULL || (*head)->data > data) {
    newNode->next = *head;
    *head = newNode;
  } else {
    // Find the correct position to insert the new node
    struct Node* current = *head;
    while (current->next != NULL && current->next->data < data) {
      current = current->next;
    }

    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;
  }
}

// Function to delete a node with the given data from the list
void delete(struct Node** head, int data) {
  struct Node* current = *head;
  struct Node* prev = NULL;

  // Find the node to be deleted
  while (current != NULL && current->data != data) {
    prev = current;
    current = current->next;
  }

  // If the node was not found, do nothing
  if (current == NULL) {
    return;
  }

  // If the node to be deleted is the first node
  if (prev == NULL) {
    *head = current->next;
  } else {
    // Skip the node to be deleted
    prev->next = current->next;
  }

  // Free the memory for the deleted node
  free(current);
}

// Function to print the linked list
void printList(struct Node* head) {
  struct Node* current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  // Create an empty linked list
  struct Node* head = NULL;

  // Insert the elements {61, 16, 8, 27} into the list
  insert(&head, 61);
  printf("List after inserting 61: ");
  printList(head);

  insert(&head, 16);
  printf("List after inserting 16: ");
  printList(head);

  insert(&head, 8);
  printf("List after inserting 8: ");
  printList(head);

  insert(&head, 27);
  printf("List after inserting 27: ");
  printList(head);

  // Delete 8, 61, and 27 from the list
  delete(&head, 8);
  printf("List after deleting 8: ");
  printList(head);
  List(head);
  delete(&head, 61);
  printf("List after deleting 61: ");
  printList(head);

  delete(&head, 27);
  printf("List after deleting 27: ");
  printList(head);

  return 0;
}


