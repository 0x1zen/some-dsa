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
int main()
{
    char arr[10];
    cin.getline(arr,20);
    int size=strlen(arr);
    reverse(arr,size);
    cout<<arr;
 return 0;
}