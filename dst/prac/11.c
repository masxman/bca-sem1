#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *createNode(int data); // Function to create a new node
Node *insert(Node *root, int data); // Function to insert an element into the tree
Node *delete(Node *root, int data); // Function to delete an element from the tree
void inorderTraversal(Node *root); // Function to traverse the tree in inorder fashion

int main() {
    Node *root = NULL;

    // Create the binary tree
    root = insert(root, 18);
    root = insert(root, 15);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 17);
    root = insert(root, 41);

    printf("The binary tree after creation is:\n");
    inorderTraversal(root);

    // Insert 45 and 19 into the tree
    root = insert(root, 45);
    root = insert(root, 19);

    printf("The binary tree after insertion of 45 and 19 is:\n");
    inorderTraversal(root);

    // Delete 15, 17 and 41 from the tree
    root = delete(root, 15);
    root = delete(root, 17);
    root = delete(root, 41);

    printf("The binary tree after deletion of 15, 17 and 41 is:\n");
    inorderTraversal(root);

    return 0;
}

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *insert(Node *root, int data) {
    if(root == NULL) {
        return createNode(data);
    }
    if(data < root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

Node *delete(Node *root, int data) {
    if(root == NULL) {
        return root;
    }
    if(data < root->data) {
        root->left = delete(root->left, data);
    }
    else if(data > root->data) {
        root->right = delete(root->right, data);
    }
    else {
        // Case 1: No child
        if(root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: One child
        else if(root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Two children
        else {
            Node *minRight = root->right;
            while(minRight->left != NULL) {
                minRight = minRight->left;
            }
            root->data = minRight->data;
            root->right = delete(root->right, minRight->data);
        }
    }
    return root;
}

void inorderTraversal(Node *root) {
    if(root != NULL) {
        inorderTraversal(root-> left);
	printf("%d",root->data);
	inorderTraversal(root->right);
    }
}


