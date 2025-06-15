#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node* head, *tail;

    head = tail = nullptr;

    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        if (head == nullptr)
        {
            head = new Node(arr[i]);
            tail=head;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        cout << temp->next << " ";
        temp = temp->next;
    }
// do previous method also
    return 0;
}