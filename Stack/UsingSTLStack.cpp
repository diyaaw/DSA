#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(56);
    s.push(56);
    s.pop();
cout<<s.size()<<endl;
cout<<s.top()<<endl;
cout<<s.empty()<<endl;
    return 0;
}