#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    long long int reverse = 0;
    // while(n>0){
    //     int last = n%10;
    //     reverse = reverse * 10 +last;
    //     n/=10;
    // }

    //  while(n<0){
    //         int last = n%10;
    //         reverse = reverse*10+last;
    //         n = n/10;
    //     }


    //method 2
    while(n!=0){
        int last = n%10;
        reverse = reverse * 10 +last;
        n/=10;
    }
    cout<<"reverse : "<<reverse;
    return 0;
}