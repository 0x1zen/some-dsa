#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
    
    if(a.length()!=b.length()){
        return false;
    }
    else{
     int j=0;
for(int i=0;i<a.length();i++){
    if(a[i]!=b[j]){
        return false;
    }
    j++;
}
    }
    return true;
}
int main()
{
    string a="Raj";
    string b="raj";
    bool ans=compare(a,b);
    cout<<ans;
 return 0;
}