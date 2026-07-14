#include<bits/stdc++.h>
using namespace std;

void name(string nam,int n){
    if(n==0){
        return;
    }
    cout<<nam<<endl;
    name(nam,n-1);
}

int main(){
    name("rahul",5);
    return 0;
}