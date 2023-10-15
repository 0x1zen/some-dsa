#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string a="Raj";
    string b="raj";
    if(a.compare(b)==0){
        cout<<"A=B";
    }
    else{
        cout<<"A!=B";
    }
 return 0;
}