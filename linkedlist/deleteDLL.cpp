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

Node *createDll(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return nullptr;
    }
    else
    {
        Node *temp = new Node(arr[index]);
        temp->prev = back;
        temp->next = createDll(arr, index + 1, size, temp);
        return temp;
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8};
    Node *head = nullptr, *tail = nullptr;
    Node *temp = head;

    head = createDll(arr, 0, 4, nullptr);

    // delete at start

    // if (head != nullptr)
    // {
    //     // if only one node exists
    //     if (head->next == nullptr)
    //     {
    //         delete head;
    //         head = nullptr;
    //     }
    //     // when many nodes exist
    //     else
    //     {
    //         Node *temp = head;
    //         head = head->next;
    //         delete temp;
    //         head->prev = nullptr;
    //     }
    // }
    // // delete at end
    // if (head != nullptr)
    // {
    //     // when one node exists
    //     if (head->next == nullptr)
    //     {
    //         delete head;
    //         head = nullptr;
    //     }
    //     // when many nodes exists
    //     else
    //     {
    //         Node *cur = head;
    //         // last node pe lekr jao curr ko
    //         while (cur->next != nullptr)
    //         {
    //             cur = cur->next;
    //         }
    //         cur->prev->next = nullptr;
    //         delete cur;
    //     }
    // }

    // deletion at random position

    int pos = 4;
    // at pos==1

    if (pos == 1)
    {
        // when single node deletion
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        // when deletion from the start but more than 1 node exists
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head-> prev = nullptr;
        }
    }
    else
    {
        Node *cur = head;
        while (--pos)
        {
            cur = cur->next;
        }

        // delete at end
        if (cur->next == nullptr)
        {
            cur->prev->next = nullptr;
            delete cur;
        }

        // delete at middle
else{
        cur->prev->next = cur->next;
        cur->next->prev = cur->prev;
        delete cur;
    }
    }
    // traverse
    Node *trav = head;
    while (trav != nullptr)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}
