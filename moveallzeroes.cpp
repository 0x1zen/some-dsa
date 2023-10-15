#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{1,0,2,3,2,0,0,4,5,1};
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        if(arr[start]!=0){
            start++;
        }
        else if(arr[end]!=0){
            end--;
        }
        else if(arr[start]==0){
            swap(arr[start],arr[end]);
            end--;
        }
    }
    for(auto it:arr){
        cout<<it<<endl;
    }
 return 0;
}