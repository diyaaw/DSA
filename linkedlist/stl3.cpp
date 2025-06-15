#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cout << "enter string : ";
    cin >> s;
    int i = 0;
    while(s[i]!='\0')
    {
        st.push(s[i]);
        i = i + 1;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();

    }
}