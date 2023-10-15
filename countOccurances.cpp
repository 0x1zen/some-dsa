#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
void countOcc(string str,int n){
  
   int count;
    for(int i=0;i<n;i++){
            count=0;
        for(int j=0;j<n;j++){
           if(i>j && str[i]==str[j]){
                 break;
           }
           else if(str[i]==str[j]){
                count++;
            }
        } 
        if(count!=0)
           cout<<count<<endl;
         

    }
 

}
int main()
{
    string str;
    getline(cin,str);
    countOcc(str,str.length());

 return 0;
}