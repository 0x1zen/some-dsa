#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
void lowerCase(char arr[],int size){

    for(int i=0;i<size;i++){
        if(arr[i]>='A' && arr[i]<='Z' && arr[i]!=' '){
                arr[i]=arr[i]-'A'+'a';
        }
        
 

    }
};
int main()
{
    char arr[20];
    cin.getline(arr,20);
    int size=strlen(arr);
    lowerCase(arr,size);
    cout<<arr;
     return 0;
}