// #include<iostream>
// using namespace std;
// class Stack{
//     int *arr;
//     int size;
//     int top;


//     public:
//     bool flag;
//     Stack(int s){
//       size=s;
//        top=-1;
//        arr = new int[s];
//        flag==1;
//     }


// //push
//     void push(int value){
//         if(top==size-1){
//             cout<<"Stack overflow"<<endl;
//             return;
//         }
//         else{
//             top++;
//             arr[top]=value;
//             cout<< " pushed "<<value<<"In stack."<<endl;
//             flag=0;
//         }
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"Stack underflow."<<endl;
//             flag=1;
//             return ;
//         }
//         else{
           
//             cout<<"Popped from stack"<<arr[top]<<endl;
//              top--;
//              return;
//         }

//     }
//     int peek(){
//         if(top==-1){
//             cout<<"stack underflow"<<endl;
//             return 0;
//         }
//         else{
//             return arr[top];
//         }
//     }
// bool isEmpty(){
//     if(top==-1){
//         return top==-1;
//     }
// }
// int Issize(){
//     return top+1;
// }
// };
// int main(){
//     Stack s(5);
//     s.push(5);
//      s.push(4);
//       s.push(3);
//        s.push(1);
//          s.push(3);
//        s.push(1);
//          s.push(3);
//        s.push(1);
//        s.pop();
//         s.pop();
        
//            s.pop();
// int value=s.peek();
// if(s.flag==0){
//     cout<<value<<endl;
// }
        
//     return 0;
// }

#include<iostream>
using namespace std;
class Stack{
int  *arr;
int top;
int size;

public:
Stack(int s){
    size=s;
    top=-1;
    arr=new int[s];
}

// Push
void push(int value){
if(top==size-1){
    cout<<"Stack overflow"<<endl;
    return;
}
else{
    top++;
    arr[top]=value;
    cout<<"Pushed in stack :"<<value<<endl;
    return;
}
}

//POP

void pop(){
    if(top==-1){
        cout<<"Stack UNderflow"<<endl;
        return;
    }
    
    else{
    cout<<"popped from stack: "<<arr[top]<<endl;
     top--;
     return;
}
}

int isPeek(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return -1;// why return -1 

    }
    else{
        return  arr[top];
    }
}

bool isEmpty(){
     return top==-1;
     
}
int IsSize(){
    return top+1;
}
};
int main(){

    Stack s(4);
    s.push(5);
      s.push(6);
          s.push(8);
            s.push(-1);
         s.pop();
          s.pop();
           s.pop();
            s.pop();
             s.pop();
             cout<<s.isEmpty()<<endl;
             cout<<s.IsSize();
        if(!s.isEmpty()){
             cout<< s.isPeek();
        }
       
    return 0;
}