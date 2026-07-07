#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.insert(v.begin(),300);   // {300};
    v.insert(v.begin()+1,5,10);     //{300,10,10,10,10,10}
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl; //6
    cout<<v.empty()<<endl;    //false

    
//copy
vector<int>v1(5,10);
vector<int>v2 = v1;
v1.clear();
for(auto i : v2){
    cout<<i<<" ";
}
    
    return 0;
}