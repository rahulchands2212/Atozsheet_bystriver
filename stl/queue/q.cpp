#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>st;
    st.push(50);
    st.emplace(10); //{10,50}

  
    st.pop() ;   //remove 50 {10};
    st.back()=100; //{100};
    st.push(50);
    cout<<st.front();
    
    return 0;
}