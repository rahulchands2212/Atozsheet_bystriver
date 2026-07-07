#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(50);
    st.push(10); //{10,50}

   cout<< st.top(); //{10};
    st.pop() ;   //remove 10 {50};
    
    return 0;
}