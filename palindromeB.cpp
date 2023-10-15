#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
void reverse(char arr[],int size){
   int start=0;
   int end=size-1;
   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}

vector<char>fillIn(char arr[],int size){
    vector<char>ans;
    for(int i=0;i<size;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
int main()
{
        char arr[20]={'r','a','j'};
    cin.getline(arr,20);
    int size=strlen(arr);
    vector<char> ans= fillIn(arr,size);
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
     }
     reverse(arr,size);
     bool isPalindrome=true;
     for(int i=0;i<size;i++){
        if(arr[i]!=ans[i]){
            isPalindrome=false;
        }
     }
     if(isPalindrome){
        cout<<"True"<<endl;
     }
     else{
        cout<<"False"<<endl;
     }
 
  
 return 0;
}