#include<bits/stdc++.h>
using namespace std;

//only for three digit number ;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int copy = n;
    int sum = 0;
    while(n>0){
        int last = n%10;
        sum = sum + (last*last*last);
        n/=10;
    }

    if(copy==sum){
        cout<<"The number is armstrong";
    }else{
        cout<<"The number is not a armstrong";
    }

    return 0;
}