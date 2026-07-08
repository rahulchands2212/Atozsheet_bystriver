#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n<1){
        return 0;
    }

    return n+sum(n-1);
}

void fn(int i,int sum){
    if(i<1){
        cout<<sum;
        return ;
    }

    fn(i-1,sum+i);
}

int main(){
    cout<<"sum : "<<sum(3);
    return 0;
}