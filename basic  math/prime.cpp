#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

   // brute force;
   int count = 0;
   for(int i=1;i*i<=n;i++){
    if(n%i==0){
        count++;
    }

    if(n%i!=i){
        count++;
    }
   }

   if(count ==2){
    cout<<"number is prime";
   }else{
    cout<<"number is not prime ";
   }

    return 0;
}