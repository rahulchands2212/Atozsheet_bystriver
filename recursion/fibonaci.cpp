#include<bits/stdc++.h>
using namespace std;

int fn(int n){
    if(n<=1){
        return n;
    }

    int last = fn(n-1);
    int slast = fn(n-2);
    return last+slast;
}


int main(){
    cout<<fn(4);
    return 0;
}