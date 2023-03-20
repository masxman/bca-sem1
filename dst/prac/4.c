#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data);
void displayList(struct Node *head);
struct Node *deleteNode(struct Node *head, int value);

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;

    // Insert elements into the linked list
    printf("Inserting elements into the linked list: \n");
    head = createNode(61);
    displayList(head);
    temp = createNode(16);
    temp->next = head;
    head = temp;
    displayList(head);
    temp = createNode(8);
    temp->next = head;
    head = temp;
    displayList(head);
    temp = createNode(27);
    temp->next = head;
    head = temp;
    displayList(head);

    // Delete nodes with values 8, 61, and 27 from the linked list
    printf("Deleting nodes with values 8, 61, and 27 from the linked list: \n");
    head = deleteNode(head, 8);
    displayList(head);
    head = deleteNode(head, 61);
    displayList(head);
    head = deleteNode(head, 27);
    displayList(head);

    return 0;
}

struct Node *createNode(int data) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node *head) {
    printf("Linked List: ");
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node *deleteNode(struct Node *head, int value) {
    struct Node *temp = head;
    struct Node *prev = NULL;

    // Traverse the linked list to find the node to be deleted
    while(temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the node to be deleted is the head node
    if(temp != NULL && temp == head) {
        head = head->next;
        free(temp);
    }

    // If the node to be deleted is not the head node
    else if(temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }

    // If the node to be deleted is not found in the linked list
    else {
        printf("Node with value %d not found\n", value);
    }

    return head;
}

