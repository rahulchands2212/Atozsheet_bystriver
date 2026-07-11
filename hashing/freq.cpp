#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;

    //array declared
    int arr[size];
    cout<<"insert "<<size<<"element on array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int fre;
    cout<<"enter total frequency number : ";
    cin>>fre;

    int farr[fre];
    cout<<"insert "<<fre<<"frequency count number : "<<endl;
    for(int i=0;i<fre;i++){
        cin>>farr[i];
    }



    //max 
    int maximum = 0;
    for(int num : farr){
        maximum = max(num,maximum);
    }


    //hash array
    int hash[maximum] = {0};


    //freq count
    for(int i : arr){
        hash[i] +=1;
    }

    //print
    for(int i : hash){
        cout<<i<<" ";
    }

    return 0;

}