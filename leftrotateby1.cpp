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
    int temp=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    // O(N)
    // O(N)
    // Extra space O(1)
 return 0;
}