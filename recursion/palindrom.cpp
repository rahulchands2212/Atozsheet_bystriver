#include<bits/stdc++.h>
using namespace std;

bool fn(int i,string str){
    int len = str.size();
    if(i>=len/2){
        return true;
    }


    if(str[i]!=str[len-1-i]){
        return false;
    }

    return fn(i+1,str);
}

int main(){
    string name = "A man, a plan, a canal: Panama";
   cout<<fn(0,name);
    return 0;
}