// basically divided into 4 major parts 
// 1. algorithm
// 2. functions
// 3. iterators
// 4. containers



#include<iostream>
#include<vector>
using namespace std;
int main(){
    //pairs are found in the tility library

// pair<int,int>p={1,3};
// cout<<p.first<<" "<<p.second<<endl;


// pair <int,int>arr[]={{1,2},{3,4},{5,6}};
// cout<<arr[1].second;

//vector now
// vector<int> v;

// v.push_back(1);
// v.emplace_back(2);

// //difference of syntax () {} between emplace and push_back
// vector<pair<int,int>>vec;
// v.push_back({1,2});
// v.emplace_back(1,2);


// vector<int>(5,100);
// //a vector ccontaining 5 instances of 100 

//  vector<int> v(5);

// // a container of size 5 with any garbage values get created
// // which can be dynamically handled

// vector<int> v1(5,20);
// vector<int> v2=(v1);
// //created v1 and then copied it into v2

// // //iterator points at the memory address where your element is
// vector<int> :: iterator it=vec.begin();
// it++;
// cout<<*it<" ";// this works as a pointer and gives us data at
// // //the location of it

// // vector<int> :: iterator it=v.rend();
// // vector<int> :: iterator it=v.rbegin();

// // //generally emplace is fadter than vector

// // cout<<vec[0];
// //gives the data at pos v[0]
// //v.at(0);

// //v.back();

// //the word auto automatically assigns the datatype to my data for me

// //now we can print the elements of a vector using loop which can be written in 3 ways and each other way is a short version of the other

// // for(vector<int> : iterator it=v.begin; it!= v.end();it++){
// //     cout<<*it<<" ";
// // }

// // for(auto it=v.begin();it!=v.end();it++){
// //     cout<<*it<<" ";
// // }

// // for(auto it:v){
// //     cout<<it<<" ";
// // }


// // //v.eraase
// // v.erase(v.begin()+1);

// // v.erase(v.begin()+2,v.begin()+4);// (starting index,ending index) it doesnt include the end index 

// // //insert function
// // vector<int>(2,100);//{100,100};
// // insert(v.begin(),300)//{300,100,100}
// // insert(v.begin()+1,2,10)//{300,10,10,100,100}

// // vector<int> copy(2,50);//{50,50}
// // v.insert(v.begin(),copy.begin(),copy.end())//{50,50,300,2,10,100,100}

// // v.size();//2 for{10,20}

// // v.pop_back();//{10}

// // //v1 {10,20}
// // //v2{30,40}
// //  v1.swap(v2)//v1{30,40} v2{10,20}

// //  v.clear(); //clears the entire vector

// //  v.empty()// t or f




---------------------------List---------------------------
//a vector basically follows a singly linked list and this list is a doubly linked list

//insert in a vector is costlier that list at begining and middle

list<int> ls;
ls.push_back(2);{2}

ls.emplace_back(4);{2,4}

ls.push_front(5);{5,2,4}

ls.emplace_front();{0,5,2,4}

//rest functions are same as vector

//isme front main better timecomplexity mil jati hai due to a fact that ye ek doubly linked list hai


--------------------------deque----------------------------

deque<int> dq;

// has push_back(), emplace_back(),push_front(),push_front(),pop_back(),pop_front(), dq_front() , dq_back()

//rest same as vectors

//stack

//push,pop,isempty,isfull,swap,st.top(),.emplace,st.size()

//st[2] is invalid

---------------------queue---------------------------------

queue<int> q;
//push,pop,emplace, back ,front,size,swap,isempty




----------------priority queue-----------------------------

pq.push(5) //5
pq.push(2)//5,2
pq.push(8)//8,5,2
pq.emplace(10)//10,8,5,2

//in priority queue when we pop and top the highest value comes out first
//has size,empty,swap
//a tree data structure  is maintained

//for a minimum priority queue, generally known as mi 
priority_queue<int,vector<int>,greater<int>
// pq.push(5);
// pq.push(2);
// pq.push(8);
// pq.emplace(10);

// cout<<pq.top();

-------------------------------set-----------------------
//stores everything in sorted manner and unique

set<int>st;
st.insert(1);//1
st.insert(2);//1,2
st.insert(2)//1,2
st.insert(4)//1,2,4
st.insert(3)//1,2,3,4

//we can use insert like in vectors
//begin(),end(),rbegin(),swap(),size(),empty()


auto it=st.find(3)
//if 3 is present it will be an iterator pointing towards the element 3 and i 3 is not present then it will be an iterator pointing towards st.end() 

int cnt=st.count(1);
//if 1 is present then returns 1 and then 1 is not present then it returns 0

st.erase(it);
you can give the element to be erased or the iterator

st.erase(it1,it2)// here(start,end) [start,end)

//everything happens in logarithmic time complexity

auto it=st.lower_bound(2);
//returns the iterator equal or less than 2

auto it=st.upper_bound(3);
//returns the iterator greater than 3    

---------------------multiset------------------------------
//only sorted not unique
//everything is same as set
//only stores duplicate elements also

multiset<int>ms;
ms.insert(1);//{1}
ms.insert(1);//{1,1};
ms.insert(1);//{1,1,1}

ms.erase(1);//all the 1's will be erased

//only a single one erased
ms.erase(ms.find(1));



//rest all functions are same as

--------------------unordered set--------------------------

unordered_set<int>st;//usorted
//similar as set all the operations work other than the lower bound and upper bound in set

//mostly its tc is bigo of 1 but once in a blue moon in the worst case it has bigo on n linear tc

----------------------------map----------------------------

//map is a container which stores eveything in concept of key value pairs. stores unique keys in sorted order
roll number-key(unique)
name-value(can be same)
map<int,int> mpp;

map<int,int> mpp;//{key,value}
map<int,pair<int,int>> mpp;
map<pair<<int,int>,int> mpp;

mpp[1]=2;//value of 2 on the key 1
mpp.emplace({3,1});

mpp.insert({2,4});
mpp({2,3})=10;// for map<pair<<int,int>,int> mpp;

{
    {1,2}
    {2,4}
    {3,1}
}

for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;

    cout<<mpp[1];//gives 2 because at 1 youre storing 2
    cout<<mpp[5];//gives null because the position doesnt exist

    auto it=mpp.find(3);
    cout<<*(it).second;

    auto it=app.find(5)
    //if 5 is not there it points to mp.end() i.e after the map

    //all other functions like lowerbound, upperbound,erase,swap,empty,size are same as above
}


--------------------------------multimap-------------------

//everything same as map only it can sotre multiple keys
//only mpp[key] cannot be used here


------------------------------unordered map----------------
unique keys but unsorted

tc- bigo on n in most of the cases once in a blue moon it gives tc bigo on n
and for map its tc is logn


return 0;

}
