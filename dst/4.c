// Linked list operations in C
#include <stdio.h>
#include <stdlib.h>
// Create a node
struct Node {
int data;
struct Node* next;
};
// Insert at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
// Allocate memory to a node
struct Node* new_node = (struct Node*)malloc(sizeof(struct
Node));
// insert the data
new_node->data = new_data;
new_node->next = (*head_ref);
// Move head to new node
(*head_ref) = new_node;
}
// Delete a node
void deleteNode(struct Node** head_ref, int key) {
struct Node *temp = *head_ref, *prev;
if (temp != NULL && temp->data == key) {
*head_ref = temp->next;
free(temp);
return;
}
// Find the key to be deleted
while (temp != NULL && temp->data != key) {
prev = temp;
temp = temp->next;
}
// If the key is not present
if (temp == NULL) return;
// Remove the node
prev->next = temp->next;
free(temp);
}
// Print the linked list
void printList(struct Node* node) {
while (node != NULL) {
printf(" %d ", node->data);
node = node->next;
}
}
// Driver program
int main() {
struct Node* head = NULL;
insertAtBeginning(&head, 2);
insertAtBeginning(&head, 3);
insertAtBeginning(&head, 6);
insertAtBeginning(&head, 7);
printf("Linked list: ");
printList(head);
printf("\nAfter deleting an element: ");
deleteNode(&head, 3);
deleteNode(&head, 6);
deleteNode(&head, 7);
printList(head);
}
