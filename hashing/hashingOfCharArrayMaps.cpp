#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    map<char,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    //auto iteration
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
    char number;
    cin>>number;
    cout<<mpp[number]<<endl;
  }
    return 0;
}