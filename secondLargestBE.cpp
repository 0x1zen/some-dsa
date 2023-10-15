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
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
    int secondlargest=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest<<endl;
    // TC-O(2N)
    // SC-O(1)
 return 0;
}