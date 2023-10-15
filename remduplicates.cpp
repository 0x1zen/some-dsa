#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
#include<stack>
using namespace std;
string removeDuplicates(string str){
    stack<char>st;
    string ans="";
    for(char ch:str){
        if(st.empty() || st.top()!=ch){
            st.push(ch);
        }
        else{

        }
    }
    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
}
int main()
{
    string str="rarrjarrr";
    string ans=removeDuplicates(str);
    cout<<ans;
     return 0;
}