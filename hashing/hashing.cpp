#include<iostream>
using namespace std;

//maximum size array we can declare inside main is 
//10 to the power 6 arr[10^6]
//but globally we can declare till 10 to the power 7
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[1000000]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1; 
    }

    int q;
    cin>>q;
    while(q--){ 
        int number;
        cin>>number;

        //fetch
    }
    return 0;
}