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
Node* createLinked(int arr[],int index,int size,Node *prev){
    if(index==size){
    return prev;
    }

    Node* temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return createLinked(arr,index+1,size,temp);

}
int main(){
    Node *head;
    head=nullptr;

    int arr[]={2,4,6,8,10};
    head=createLinked(arr,0,5,head);
    //printing the LL
    Node* temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}