#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
bool isSorted(vector<int>arr,int size){
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int>arr{1,2,3,4,5};
    bool ans= isSorted(arr,arr.size());
    cout<<ans;
 return 0;
}