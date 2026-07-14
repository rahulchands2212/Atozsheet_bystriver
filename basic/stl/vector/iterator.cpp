#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    //method 1
    for(auto i = v.begin(); i!=v.end() ; i++){  //they pointing the memory location
        cout<<*i<<" ";  //use * for print data from inside the memory 
    }
    cout<<endl;

    //method 2
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}