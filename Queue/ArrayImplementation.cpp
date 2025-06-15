#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int front, rear;
    int size;
    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }
    // if queue is empty or not

    bool isEmpty()
    {
        return front == -1;
    }

    // queue is full or not
    bool isFull()
    {
        return rear == size - 1;
    }

    // push element into queue at end

    void push(int x)
    {
        if (isEmpty())
        {
            cout<<"Pushed into queue :"<<x<<endl;
            front = rear = 0;
            arr[front] = x;
            return;
        }
        else if (isFull())
        {
            cout << "Queue overflow" << endl;
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
            cout<<"Pushed into queue :"<<x<<endl;
        }
    }

    // pop elements front se

    void pop()
    {
        // empty
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return;
        }

        // pop kardo
        else
        {
            if (front == rear)
            {
                cout << "Popped from the queue :" << arr[front] << endl;
                front = rear = -1;
            }
            else
            {
                cout << "Popped from the queue :" << arr[front] << endl;
                front = front + 1;
            }
        }
    }

    // starting ka element dekhna hai

    int start(){
        //emptyy queue
        if(isEmpty()){
            cout<<"Empty Queue"<<endl;
            return -1;
        }

        //bhari hui queue
        else{
            return arr[front];

        }
    }
};
int main()
{
    Queue q(5);
    q.push(5);
    q.push(56);
    q.push(78);
    q.pop();
    q.pop();
    int x=q.start();
    if(!q.isEmpty()){
cout<<x<<endl;
    }

    return 0;
}