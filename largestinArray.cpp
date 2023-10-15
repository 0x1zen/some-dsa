#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{7,4,11,3,9,6};
    sort(arr.begin(),arr.end());
    cout<<arr[arr.size()-1];
    // TC-(nlogn)
    // SC-O(1)
 return 0;
}