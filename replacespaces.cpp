#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
void removeSpaces(char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==' '){
            arr[i]='@';
        } 
    }
}
int main()
{
    char arr[20];
    cin.getline(arr,20);
    int size=strlen(arr);
    removeSpaces(arr,size);
    cout<<arr;
 return 0;
}