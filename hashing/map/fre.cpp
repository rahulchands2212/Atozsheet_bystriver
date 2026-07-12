#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;

    //array declared
    int arr[size];
      //map<int,int>mpp;
    cout<<"insert "<<size<<"element on array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        // mpp[arr[i]]++;
    }


    map<int,int>mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }

    cout<<"freq : "<<endl;

    for(auto i : mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;

}