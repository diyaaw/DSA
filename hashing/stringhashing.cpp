#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

//when we take the hash size as 26 then we wrote 
//hash[s[i]-'a']++; and when 256 we write the current

    //pre compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        cout<<hash[c]<<endl;
    }
    return 0;
}