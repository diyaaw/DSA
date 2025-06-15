#include<iostream>
using namespace std;
class Queue{
int *arr;
int size;
int front,rear;
public:

Queue(int n){
    arr=new int[n];
    size=n;
    front=rear=-1;
}

// if queue is empty

bool Isempty(){
    return front==-1;
}

// to check if queue is full

bool isFull(){
    return (rear+1)%size==front;
}

//to push into queue

void push(int x){
    if(Isempty()){
    cout<<"Pushed into queue :"<<x<<endl;
    front=rear=0;
    arr[0]=x;
    return;
    }
    else if(isFull()){
        cout<<"Queue overflow"<<endl;
        return;
    }
    else{
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<"Pushed into queue :"<<x<<endl;
    }
}

// to pop elements into a queue

void pop(){
    if(Isempty()){
        cout<<"Queue underflow."<<endl;
        return;
    }
    // to pop
    else{
    if(front==rear){
         cout<<"Popped "<<arr[front]<<"Into the qUEUE"<<endl;
         front=rear=-1;
    }
    else{
        cout<<"Popped "<<arr[front]<<"from the queue"<<endl;
        front=(front+1)%size;
    }
    }
}
// starting ka element dekhna hai

int start(){
    //emptyy queue
    if(Isempty()){
        cout<<"Empty Queue"<<endl;
        return -1;
    }

    //bhari hui queue
    else{
        return arr[front];

    }
}
};
int main(){
    
    Queue q(5);
    q.push(5);
    q.push(56);
    q.push(78);
    q.pop();
    q.pop();
    int x=q.start();
    if(!q.Isempty()){
cout<<x<<endl;
    }
    return 0;
}