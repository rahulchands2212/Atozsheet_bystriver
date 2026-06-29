#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    //first half;
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //space
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }

        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //second half;
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int k=0;k<2*(n-1-i);k++){
            cout<<" ";
        }
        //star
            for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}