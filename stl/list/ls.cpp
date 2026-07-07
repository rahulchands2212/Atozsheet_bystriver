#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> ls;
    ls.push_back(5);    //{5}
    ls.emplace_back(6); //{5,6}

    ls.push_front(10);      //{10,5,6}
    ls.emplace_front(50);   //{50,10,5,6}

    for(auto i : ls){
        cout<<i<<" ";
    }

    /* other operation are same like vector */

    return 0;
}