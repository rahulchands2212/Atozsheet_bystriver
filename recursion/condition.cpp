#include<bits/stdc++.h>
using namespace std;

int cut = 0;
void fn(){
    if(cut==3){
        return ;
    }
    cout<<cut<<endl;
    cut++;
    fn();
}

int main(){
    fn();
    return 0;
}