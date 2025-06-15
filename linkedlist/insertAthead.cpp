#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor for creating a nodeF
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

int main()
{
    // this is not dynamic
    // Node a(4);
    // this is dynamic
    Node *head;

    head = new Node(4); // head pointer contains the the memory address of the new node created
    head = nullptr;
// insertion at head
    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        if (head == nullptr)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]); 
            temp->next=head;
            head=temp;
    }
    }

    
    //print the LL
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}