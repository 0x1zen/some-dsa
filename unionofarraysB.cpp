#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr1{1,1,2,3,4,5};
    vector<int>arr2{2,3,4,4,5,6};
    set<int>st;
    for(auto it:arr1){
        st.insert(it);
    }
     for(auto kt:arr2){
        st.insert(kt);
    }
    vector<int>ans;
    for(auto bt:st){
       ans.push_back(bt);
    }
    for(auto st:ans){
        cout<<st<<endl;
    }
 return 0;
}