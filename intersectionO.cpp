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
    vector<int>ans;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
 return 0;
}