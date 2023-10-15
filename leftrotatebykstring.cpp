#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string arr="abcdefg";
    int k=3;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.begin()+arr.length());
    reverse(arr.begin(),arr.begin()+arr.length());
    cout<<arr;
    //  vector<char>ans;
    // for(int i=0;i<k;i++){
    //    ans.push_back(str[i]);
    // }
    // for(int i=k;i<str.length();i++){
    //     str[i-k]=str[i];
    // }
    // int j=0;
    // for(int i=str.length()-k;i<str.length();i++){
    //     str[i]=ans[j];
    //     j++;
    // }
    //  for(int i=0;i<str.length();i++){
    //    cout<<str[i]<<endl;
    // }

 return 0;
}