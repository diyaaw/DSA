#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;

    Node(int value){
        data=value;
        left=right=nullptr;
    }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
    if(preorder[idx]==-1){
        return nullptr;
    }
    Node *root = new Node(preorder[idx]);
    root->left=buildTree(preorder);//LEFT
    root->right=buildTree(preorder);//RIGHT

    return root;
}

//  Node* insert(Node *root,int target){
//     //base case
//     if(!root){
//         Node* temp=new Node(target);
//         return temp;
//     }
//         if(root->data > target){
//             root->left=insert(root->left,target);
//         }
//         else{
//             root->right=insert(root->right,target);
//         }
    
//     return root;
//  }

//  //searching in bst
//  bool search(Node* root, int target){
//     if(!root){
//         return 0;
//     }
//     if(root->data==target){
//         return 1;
//     }

//     if(root->data>target){
//         return search(root->left,target);
//     }
//     else{
//         return search(root->right,target);
//     }

//  }

//  //inorder traversal

//  void inorder(Node* root){
//     if(!root){
//         return;
//     }

//     //left side
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
//  }
int main(){

    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    cout<<root->data<<" ";
//     int arr[]={6,3,17,5,11,18,2,1,20,14};
//     Node* root=nullptr;

//     for(int i=0;i<10;i++){
//         root=insert(root,arr[i]);
//     }


//     //Traversal
//     // inorder(root);

//     cout<<search(root,71);
//     return 0;
}