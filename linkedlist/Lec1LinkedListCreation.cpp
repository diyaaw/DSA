#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node(int value){
this->data=value;
this->next=NULL;
    }
};
int main(){// creating a new code
    Node* node1, mera sir;
    node1=new Node(10);
    cout<<node1->data<<endl;
     cout<<node1->next<<endl;
    
    return 0;
}
