#include<bits/stdc++.h>
using namespace std;

void reverse(int i,vector<int>&arr){
int len = arr.size();
    
    if(len-1-i <=(len)/2){
        return ;
    }
    swap(arr[i],arr[len-1-i]);
    
    reverse(i+1,arr);
}

void reversemethod2(int l,int r,vector<int>&arr){
    if(l>=r){
        return ;
    }

    swap(arr[l],arr[r]);
    reversemethod2(l+1,r-1,arr);

}


int main(){
    vector<int>arr = {1,2,3,4,5};
    // reversemethod2(0,4,arr);
    reverse(0,arr);

    for(int i:arr){
        cout<<i<<" ";
    }
 
    return 0;

}