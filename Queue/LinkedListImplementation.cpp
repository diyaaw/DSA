#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int value){
    data=value;
    next=NULL;
}
};

class Queue{
    public:
Node *front;
Node* rear;

Queue(){
    front=rear= NULL;
}

bool isEmpty(){
    return front==nullptr;
}

void push(int x){
if(isEmpty()){
    cout<<"Pushed into the queue :"<<x<<endl;
    front=new Node(x);
    rear=front;
    return;
}
else{
    cout<<"Pushed into the queue :"<<x<<endl;
   rear->next=new Node(x);
  rear=rear->next;
}
}

// pop
void pop(){
    if(isEmpty()){
        cout<<"Queue underflow"<<endl;
        return;
    }
    else{
        cout<<"Popped from the queue :"<<front->data<<endl;
        Node* temp=front;
        front=front->next;
        delete temp;
    }
}

// starting y phir front element

int start(){
    if(isEmpty()){
        cout<<"Empty queue "<<endl;
    return -1;
    }
    else return front->data;
}
};
int main(){
    Queue d;
    d.push(67);
    d.pop();
    cout<<d.start()<<endl;
    return 0;
}