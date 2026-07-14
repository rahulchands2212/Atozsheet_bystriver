#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans;
    int n =5;
    int last = 1,slast=0;
    cout<<slast<<"\n"<<last<<"\n";
    for(int i=2;i<=n;i++){
        ans = slast+last;
       slast = last;
       last=ans;    //last he n fibonachi hota hai
       cout<<ans<<endl;
    }
    cout<<n<<" fibonacie number : "<<ans;
    return 0;
}