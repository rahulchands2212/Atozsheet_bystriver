#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cout<<"enter string only lower case : ";
    cin>>str;

    /*formula index = char-'a' 
        example : - 
        a-a = 0
        b-a = 1
        c-a = 2 
        */
    int hash[26] = {0};
    for(int i :str){
        int index = i-'a';
        hash[index]+=1;
        
    }

    for(int i: hash){
        cout<<i<<" ";
    }

    return 0;

}