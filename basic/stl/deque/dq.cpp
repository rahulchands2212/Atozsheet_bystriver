#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(5);
    d.emplace_back(8);

    d.push_front(80);
    d.emplace_front(10);    //{10,80,5,8};
    for(auto i : d){
        cout<<i<<" ";
    }

    /*same operation like vector*/
    return 0;
}