#include<iostream>
using namespace std;

void btn(int i,int n){
    if(i>n){
        return ;
    }

    btn(i+1,n);
    cout<<i<<endl;
}

int main(){
    btn(1,5);
    return 0;
}