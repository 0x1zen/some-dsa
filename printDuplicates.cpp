#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
#include<unordered_set>
using namespace std;
void printUniqueDuplicates(vector<int>arr){
unordered_set<int>seen;
unordered_set<int>duplicates;
for(auto it:arr){
    if(seen.count(it)>0){
        duplicates.insert(it);
    }
    seen.insert(it);
}
for(auto it:duplicates){
    cout<<it<<endl;
}
}
int main()
{
    vector<int> arr = {2, 5, 4, 2, 4, 5, 2, 2, 7, 2, 3, 2,7};
    printUniqueDuplicates(arr);
 return 0;
}