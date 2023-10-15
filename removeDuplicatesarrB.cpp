#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{1,1,2,2,2,3,3,4,4,4,4};
    set<int>st;
    for(int i=0;i<arr.size();i++){
        st.insert(arr[i]);
    }
    vector<int>ans;

    for(auto it:st){
      ans.push_back(it);
      
    }
    //   for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    // }
    cout<<ans.size();
    // O(Nlogn+N)
    // O(2N)
 return 0;
}