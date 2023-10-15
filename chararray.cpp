#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char arr[20];
    cin.getline(arr,15);
    
    cout<<arr<<endl;
    int size=sizeof(arr)/sizeof(char);
    cout<<size;
 return 0;
}