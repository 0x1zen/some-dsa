#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>a{1,1,2,3,4,5};
    vector<int>b{2,3,4,4,5,6};
    int visited[b.size()]={0};
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j] && visited[j]==0){
              ans.push_back(a[i]);
                   visited[j]=1;
                   break;
            }
            if(b[j]>a[i]) break;
        }
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
 return 0;
}