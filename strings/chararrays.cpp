#include<iostream>
#include<algorithm>//for using reverse function
using namespace std;

int main(){
//these are char arrays
    // char str[12];

    // cout<<"Enter char array:";
    // cin.getline(str,12,','); //' ' braclet is necessary "" will not work
    //this is for each loop
    
    //for(char ch: str){
    //     cout<<ch<<" ";
    // }
 
    
    //methods to calculate the length of stings
    // char str[]="DIya wadhwa";
    // int len=0;
    // for(int i=0;i<str[i]!='\0';i++){
    //     len++;
    // }
    // cout<<len;


    //class string exists in cpp there are different from char arrays
    // string str="Apna college";
    // //strings are dynamic in nature
    // cout<<str<<endl;

    // string str1="diya";
    // string str2="wad";
    // cout<<(str2>str1);

// it will not print after white spaces
    // string str1;
    // cin>>str1;
    // cout<<"output :"<<str1;

    //but this cin.getline function will print irrespective of white spaces

    // string str;
    // getline(cin,str);
    // cout<<"output :"<<str<<endl;

//for printing of the str we can use for loop as well as for each loop


//reversing of string can be done by reverse function 
string atr="Diya wadhwa";
reverse(atr.begin(),atr.end());//iterators
cout<<atr;
    return 0;
}