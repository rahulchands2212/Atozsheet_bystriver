#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    //method 1
//    int count = 0;
//     while(n>0){
//         count++;
//         n/=10;
//     }

//method 2
int count= log10(n)+1;
    cout<<"count : "<<count;

    return 0;
}

/* time compliexity = o(log10(n)) */