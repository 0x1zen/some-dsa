#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{7,4,11,3,9,11,10,10,6,11,11,11,11,24,25,25};
    sort(arr.begin(),arr.end());
    int secondlargest=arr[arr.size()-1];
    for(int i=arr.size()-1 ;i>=0;i--){
         if(arr[i]<secondlargest){
            secondlargest=arr[i];
            break;
         }
    }
    cout<<secondlargest<<endl;
 return 0;
}