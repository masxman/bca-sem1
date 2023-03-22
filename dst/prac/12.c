#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(struct Node** head_ref, int key) {
    struct Node *temp = *head_ref, *prev = NULL;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    insertAtBeginning(&head, 27);
    insertAtBeginning(&head, 8);
    insertAtBeginning(&head, 16);
    insertAtBeginning(&head, 61);
    printf("Linked list: ");
    printList(head);
    printf("\nAfter deleting 3 elements: ");
    deleteNode(&head, 8);
    deleteNode(&head, 61);
    deleteNode(&head, 27);
    printList(head);
    return 0;
}

