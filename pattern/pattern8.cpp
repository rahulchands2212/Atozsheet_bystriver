#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    // my approch 
    // for(int i=n-1;i>=0;i--){
    //     for(int k=n-1;k>i;k--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //striver
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}