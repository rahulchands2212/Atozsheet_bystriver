#include<bits/stdc++.h>
using namespace std;

int main(){
    //declared method 1;
    cout<<" --- declared method 1 --- "<<endl;
    vector<int>v;
    v.push_back(4);
    v.push_back(8);
    cout<<v[0]<<" "<<v[1]<<endl;


    //declared method 2;
    cout<<" --- declared method 2 --- "<<endl;
    vector<int>v1(5,10);    //{10,10,10,10,10};  
    for(auto i : v1){       //auto keyword auto matic detect data type
        cout<<i<<" ";
    }
    cout<<endl;

    //declared  method 3
    cout<<" --- declared method 3 --- "<<endl;
    vector<int>v2(5);    //size is 5 each index contain 0 value; {0,0,0,0,0};
    for(auto i : v2){
        cout<<i<<" ";
    }
    cout<<endl;

    //copy another vector ;
    cout<<" --- declared method 4 --- "<<endl;
    vector<int>v3 = {1,2,5,3,6};
    vector<int>vcopy(v3); //{1,2,5,3,6}
    for(auto i : vcopy){
        cout<<i<<" ";
    }
    cout<<endl;

    //pair in vector
    cout<<" --- declared method 5 pair in vector --- "<<endl;
    vector<pair<int,int>>v4;
    v4.push_back({1,2});    //push method 1
    cout<<v4[0].first<<" "<<v4[0].second<<endl;

    v4.emplace_back(2,3);
    cout<<v4[1].first<<" "<<v4[1].second<<endl;

    return 0;
}