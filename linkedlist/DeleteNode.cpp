#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int value){
    data=value;
    next=nullptr;
}

};
Node* CreateLinkedList(int arr[],int index,int size){
    if(index==size){
        return nullptr;
    }
    Node* temp;
    temp=new Node(arr[index]);
  temp->next=CreateLinkedList(arr,index+1,size);
  return temp;
}
int main(){
    Node* head;
    head=nullptr;
    int arr[]={1,2,3,4,5};
    head= CreateLinkedList(arr,0,5);

//deleting first node
// if(head!=nullptr){
//     Node* temp=head;
//     head=temp->next;
//     delete temp;

// }
//deleting last node

if(head!=nullptr){//for one node
    if(head->next==nullptr){
        Node*temp=head;
        delete temp;
        head=nullptr;
    }
    else{//for more than once node
Node* curr=head;
Node* prev=nullptr;
while(curr->next!=nullptr){
    prev=curr;
    curr=curr->next;
}
prev->next=curr->next;
delete curr;
    }
}

//delete particular node


    
    
    
    
    
    //printing
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}