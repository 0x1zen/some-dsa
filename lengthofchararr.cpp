#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char arr[10];
    cin.getline(arr,10);
    int count=0;
    int i=0;
   while(arr[i]!='\0'){
    count++;
    i++;
   }
    cout<<count;cout<<endl;
    cout<<strlen(arr)<<endl;
 return 0;
}