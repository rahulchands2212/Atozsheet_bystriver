#include<bits/stdc++.h>
using namespace std;

double fn(int x,int n){
      double ans = 1;
        long long int y = n;
        if(y<0){
            y = y*-1;
        }
            //brute froce
            // for(int i=0;i<n;i++){
            //     ans *= x;
            // }

            while(y!=0){
                if(y%2!=0){
                    ans = ans*x;
                    y = y-1;
                }else{
                    x = x*x;
                    y/=2;
                }
            }
            if(n<0){
                ans = 1/ans;
            }

        
        return ans;
}

int main(){
    cout<<fn(2,6);
    return 0;
}
