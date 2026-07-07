#include<bits/stdc++.h>
using namespace std;

void backt(int i,int n){
    if(i<1){
        return ;
    }

    backt(i-1,n);
    cout<<i<<endl;
}

void backtmethod2(int i){
    if(i<1){
        return ;
    }

    backtmethod2(i-1);
    cout<<i<<endl;
}

int main(){
    backt(5,5);
    return 0;
}