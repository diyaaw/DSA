#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = prev = nullptr;
    }
};
// creation of DLL with recursion

// Node *createDll(int arr[], int index, int size, Node *back)
// {
//     if (index == size)
//     {
//         return nullptr;
//     }
//     else
//     {
//         Node *temp = new Node(arr[index]);
//         temp->prev = back;
//         temp->next = createDll(arr, index + 1, 4, temp);
//         return temp;
//     }
// }
int main()
{
    int arr[] = {2, 4, 6, 8};
    Node *head = nullptr, *tail = nullptr;
    Node *temp = head;


// creation of DLL using insertion at start
    for (int i = 0; i < 4; i++)
    {
        if (head == nullptr)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    // insertion at any position
    int pos = 5;//position varies from 1 to 4 and 0 is null 
    // insert at start
    if (pos == 0)
    {
        // list doesnt exist
        if (head == nullptr)
        {
            head = new Node(5);
        }
        else
        { // when list exists
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        Node *cur = head;
        while (--pos)
        {
            cur = cur->next;
        }

        // insert at end
        if (cur->next == nullptr)//last node
          {
            Node *temp = new Node(5);
            temp->prev = cur;
            cur->next = temp;
        }
        // insert at any random position and that is after current
        else{
            Node*temp=new Node(5);
            temp->next=cur->next;
            temp->prev=cur;
            cur->next=temp;
            temp->next->prev=temp;
        }
    }

    
    // head = createDll(arr, 0, 4, nullptr);

    // creation of doublly linked list using array

    // for (int i = 0; i < 4; i++)
    // {
    //     // linked list doesnt exist
    //     if (head == nullptr)

    //         {
    //             head = new Node(arr[i]);
    //             tail = head;
    //         }
    //         else
    //         {
    //             Node *temp = new Node(arr[i]);
    //             temp->prev = tail;
    //             tail->next = temp;
    //             tail = temp;
    //         }

    // }

    // insertion at head

    // if (head == nullptr)
    // {
    //     head = new Node(5);
    // }
    // else
    // {
    //     Node *temp = new Node(5);
    //     temp->next = head;
    //     head->prev = temp;
    //     head = temp;
    // }

    // traversal

    Node *trav = head;
    while (trav != nullptr)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}
