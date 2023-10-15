#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{2,3,5,6,9,11,4,5};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            ans.push_back(arr[i]);
        }
   
    }
      for(int i=0;i<arr.size();i++){
         if(arr[i]%2!=0){
            ans.push_back(arr[i]);
         }    
   
    }
    for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   
    }
    
    
 return 0;
}