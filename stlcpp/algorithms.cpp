//sorting

sort(a,a+n);
sort(v.begin(),v.end());

sort(a+2,a+4);

sort(a,a+n,greater<int>)//automatically sorts in the descending order

 //for my way sorting
 bool comp (pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    //if they are same

    if(p1.first>p2.first) return true;
    return false;


    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    //sort it according to second element
    //if second element is same, then sort
    //it according to first element but in descending

    sort(a,a+n,comp);

    //{4,1},{2,1},{1,2}

    //returns number of bits

    int num=7;
    int cnt= __builtin_popcount();

    long long num= 165786578687;
    int cnt=__builtin_popcountll();

    //for knowing all the permutations of any num we use this, make sure the thing to be done is in sorted manner for calculation of all the permutations

    string s="123"
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()));



    }

//for calculations of the max and min element

int maxi=*max_element(a,a+n);
 }


