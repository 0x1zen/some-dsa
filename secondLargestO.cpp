#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int secondsmallest(vector<int>arr,int n){
        int smallest=arr[0];
        int secondsmallest=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<smallest){
            secondsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<secondsmallest){
            secondsmallest=arr[i];
        }
    }
    return secondsmallest;
}

int secondlargest(vector<int>arr,int n){
        int largest=arr[0];
        int secondlargest=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int main()
{
    vector<int>arr{7,4,11,3,1,9,6};
    int ans=secondlargest(arr,arr.size());
    int ans2=secondsmallest(arr,arr.size());
    cout<<"The second largest is"<<ans<<endl;
    cout<<"The second smallest is"<<ans2<<endl;
    // O(n)

 return 0;
}