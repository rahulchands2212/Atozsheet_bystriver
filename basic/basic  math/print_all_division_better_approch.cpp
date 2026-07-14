#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    //vector define
    vector<int>v;

   for(int i=1;i*i<=n;i++){
    if(n%i==0){
        v.push_back(i); //insert on vector
    }

    if(n%i!=i){
        v.push_back(n/i);   //insert on vector
    }
   }

   sort(v.begin(),v.end()); //sort vector in asc

   for(auto i : v){ //for each loop for access elements;
    cout<<i<<" ";
   }

    return 0;
}