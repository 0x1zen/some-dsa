#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
void printName(int reps){
    if(reps>0){
        cout<<"Raj"<<endl;
        printName(reps-1);
    }
}

int main()
{

int reps=100;
printName(reps);
 return 0;
}