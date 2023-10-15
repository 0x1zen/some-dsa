#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
upperCase(char arr[],int size){

    for(int i=0;i<size;i++){
            if(arr[i]>='a' && arr[i]<='z'){
                arr[i]=arr[i]-'a'+'A';
        // 114-97+65
    }

    }
};
int main()
{
    char arr[20];
    cin.getline(arr,20);
    int size=strlen(arr);
    upperCase(arr,size);
    cout<<arr;
     return 0;
}