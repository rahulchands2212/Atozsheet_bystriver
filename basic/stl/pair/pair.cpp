#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;


    pair<int ,pair<int , pair<int,int>>>p1 = {1,{5,{8,23}}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second.first<<" "<<p1.second.second.second <<endl;
    //1 5 8 23

    pair<int,int>arr[]={{5,2},{6,8},{8,9}};
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<" ";
    }
    return 0;
}