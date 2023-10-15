#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
bool palindrome(char arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        if(arr[start]==arr[end]){
            start++;
            end--;
        }
        else {
            return false;
        }
        
    }
    return true;
}
int main()
{
    char arr[20];
    cin.getline(arr,20);
    int size=strlen(arr);
    bool ans= palindrome(arr,size);
    cout<<ans;
 return 0;
}