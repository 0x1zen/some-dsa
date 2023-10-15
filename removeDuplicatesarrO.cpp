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
    int i=0;
    vector<int>ans;
    for(int j=1;j<arr.size();j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        ans.push_back(arr[i+1]);
        i++;

    }
    }
    cout<<i+1<<endl;
    for(int j=0;j<ans.size();j++){
    cout<<ans[j]<<endl;
    }
 return 0;
}