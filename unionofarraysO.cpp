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
    int i=0,j=0;
    vector<int>ans;
    while(i<a.size() && j<b.size()){
         if(a[i]<=b[i]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
            else{
                if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
            }
            }
            while(j<b.size()){
                     if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
            }
            while(i<a.size()){
                 if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
            }

         
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
 return 0;
}