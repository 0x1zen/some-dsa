#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str="raj";
    string str2="ajka";
    string ans="";
    for(int i=0;i<str.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str[i]==str2[j]){
                ans.push_back(str[i]);
            }
        }
    }
    cout<<ans;
 return 0;
}