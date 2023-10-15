#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str="rajdubal";
    int start=0;
    int end=str.length()-1;
    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str;
 return 0;
}