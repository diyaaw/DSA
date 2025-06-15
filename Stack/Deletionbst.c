#include <stdio.h>
#include <stdlib.h>

// Define a structure for tree nodes
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) return createNode(data); // If tree is empty, create root node

    if (data < root->data)
        root->left = insert(root->left, data); // Insert in left subtree
    else
        root->right = insert(root->right, data); // Insert in right subtree

    return root;
}

// Function to find the node with the minimum value in a subtree
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left; // Leftmost node is the smallest
    return current;
}

// Function to delete a node from BST
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root; // Base case: If tree is empty

    if (data < root->data)
        root->left = deleteNode(root->left, data); // Traverse left subtree
    else if (data > root->data)
        root->right = deleteNode(root->right, data); // Traverse right subtree
    else {
        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Case 2: Node with two children
        struct Node* temp = minValueNode(root->right); // Get inorder successor
        root->data = temp->data; // Replace node data with successor value
        root->right = deleteNode(root->right, temp->data); // Delete successor
    }
    return root;
}

// Function for inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Driver code
int main() {
    struct Node* root = NULL;

    // Insert nodes into BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder Traversal : ");
    inorder(root);
    printf("\n");

    // Delete a node
    root = deleteNode(root, 50);

    printf("Inorder Traversal After Deletion: ");
    inorder(root);
    printf("\n");

    return 0;
}
