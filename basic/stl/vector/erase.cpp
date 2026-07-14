#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    //delete from at particular index;
    v.erase(v.begin()+2);  // {1,2,4,5,6,7,8,9,10};
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    //delete multiple element with the help of index
    v.erase(v.begin()+1,v.begin()+5); //{1,7,8,9,10}    //starting index or end index it not include end index;
      for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}