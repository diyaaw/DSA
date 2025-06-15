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