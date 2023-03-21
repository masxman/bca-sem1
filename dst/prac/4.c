#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    printf("Inserted %d\n", data);
}

void delete(int key) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        temp = head;
        printf("Deleted %d\n", key);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element %d not found\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted %d\n", key);
}

void display() {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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

    delete(8);
    display();
    delete(61);
    display();
    delete(27);
    display();

    return 0;
}

