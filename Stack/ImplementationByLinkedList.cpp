#include <iostream>
using namespace std;
// class NODE
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// class stack
class Stack
{
public:
    int size;
    Node *top;
    Stack()
    {
        size = 0;
        top = nullptr;
    }

    // Push

    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == nullptr)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout<<"Pushed value into the stack"<<value<<endl;
        }
    }
    void pop(){
        Node* temp=top;
        if(temp==nullptr){
            cout<<"Stack underflow"<<endl;
            return ;
        }
        else{
            top=top->next;
            cout<<"Popped out of the stack"<< temp->data<<endl;
            delete temp;
            size--;
        }
    }
    //PEEk

    int peek(){
        if(top==nullptr){
            cout<<"Stack is empty"<<endl;
        }
        else{
            return top->data;
        }
    }

    bool isEmpty(){
        return top==nullptr;
    }

    int IsSize(){
        return size;
    }
};

int main()

{

    Stack S;
    S.push(45);
S.push(34);
S.push(7);
S.push(78);
S.push(56);
S.pop();
cout<<S.peek()<<endl;
cout<<S.isEmpty()<<endl;
cout<<S.IsSize()<<endl;
    return 0;
}