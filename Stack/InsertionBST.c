#include <stdio.h>
#include <stdlib.h>

// Define structure for tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert an element in a BST manner
struct Node* insertNode(struct Node* root, int data) {
    // If tree is empty, create a new node as root
    if (root == NULL) {
        return createNode(data);
    }

    // Insert recursively based on BST rules
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    
    return root;
}

// Inorder traversal of the binary tree
void inorderTraversal(struct Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Driver code
int main() {
    struct Node* root = NULL;

    // Inserting elements in BST order
    root = insertNode(root, 10);
    root = insertNode(root, 11);
    root = insertNode(root, 9);
    root = insertNode(root, 7);
    root = insertNode(root, 15);
    root = insertNode(root, 8);
    root = insertNode(root, 12);

    // Inorder traversal after insertion
    printf("Inorder Traversal: ");
    inorderTraversal(root);

    return 0;
}
