#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *insert(struct node *head, int data) {
  // Create a new node
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;

  // If the list is empty, return the new node as the head
  if (head == NULL) {
    return new_node;
  }

  // Find the correct position for the new node in the ordered list
  struct node *current = head;
  struct node *previous = NULL;
  while (current != NULL && current->data < data) {
    previous = current;
    current = current->next;
  }

  // Insert the new node
  new_node->next = current;
  if (previous == NULL) {
    head = new_node;
  } else {
    previous->next = new_node;
  }

  return head;
}

struct node *delete(struct node *head, int data) {
  // If the list is empty, return NULL
  if (head == NULL) {
    return NULL;
  }

  // Find the node to delete
  struct node *current = head;
  struct node *previous = NULL;
  while (current != NULL && current->data != data) {
    previous = current;
    current = current->next;
  }

  // If the node was not found, return the head unchanged
  if (current == NULL) {
    return head;
  }

  // Delete the node
  if (previous == NULL) {
    head = current->next;
  } else {
    previous->next = current->next;
  }
  free(current);

  return head;
}

void print_list(struct node *head) {
  struct node *current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main(void) {
  struct node *head = NULL;

  // Insert the elements into the list
  head = insert(head, 61);
  print_list(head); // prints 61
  head = insert(head, 16);
  print_list(head); // prints 16 61
  head = insert(head, 8);
  print_list(head); // prints 8 16 61
  head = insert(head, 27);
  print_list(head); // prints 8 16 27 61

  // Delete the elements from the list
  head = delete(head, 8);
  print_list(head); // prints 16 27 61
  head = delete(head, 61);
  print_list(head); // prints 16 27
  head = delete(head, 27);
  print_list(head); // prints 16

  return 0;
}

