#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<bool>arr{1,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0};
    int count=0;
    int target=5;
    int finaltarget=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            count=0;
        }
        else{
            count++;
            if(count==target){
                finaltarget+=1;
            }
        }
    }
    cout<<finaltarget;
 return 0;
}