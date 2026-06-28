#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    char ch;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-1-i;k++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            ch = 'A'+j;
            cout<<ch;
            
        }

        for(int j=0;j<i;j++){
            ch--;
            cout<<ch;
        }
        
        cout<<endl;
    }



    return 0;
}