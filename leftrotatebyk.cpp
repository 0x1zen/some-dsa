#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5};
    int k=3;
    vector<int>ans;
    for(int i=0;i<k;i++){
       ans.push_back(arr[i]);
    }
     for(int i=k;i<arr.size();i++){
        arr[i-k]=arr[i];
     }
     int j=0;
     for(int i=arr.size()-k;i<arr.size();i++){
        arr[i]=ans[j];
        j++;

     }
      for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<endl;
    }
 return 0;
}