#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char ch = ('A'+j)+(n-1-i);
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    //  for(int i=0;i<n;i++){
    //       char ch = 'A'+(n-1-i);
    //     for(int j=0;j<=i;j++){
    //         cout<<char(ch+j)<<" ";
    //     }
        
    //     cout<<endl;
    // }

    return 0;
}