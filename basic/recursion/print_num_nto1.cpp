#include<bits/stdc++.h>
using namespace std;

void num(int i,int n){
    if(i<n){
        return ;
    }

    cout<<i<<endl;
    num(i-1,n);
}

int main(){
    num(5,1);
    return 0;
}