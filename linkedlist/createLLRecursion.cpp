#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;


    Node (int value)
    {
         data = value;
        next = nullptr;
    }
};
Node *createLinkedList(int arr[], int index, int size)
{
    if (index == size)
        return nullptr;

    else
    {
        Node *temp;
        temp = new Node(arr[index]);
        temp->next = createLinkedList(arr, index + 1, size);
        return temp;
    }
}

int main()
{
    Node *head;
    head = nullptr;
    int arr[] = {2, 4, 6, 8, 10};
    head = createLinkedList(arr, 0, 5);
    //insert at random position
    int x=3;
    int value=30;
    Node* temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    Node* temp2= new Node(30);
    temp2->next=temp->next;
    temp->next=temp2;




temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
       
        temp=temp->next;
    }

    return 0;
}