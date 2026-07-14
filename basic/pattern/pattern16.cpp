#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    // for(char i='A';i<'A'+n;i++){
    //     for(char j='A';j<=i;j++){
    //     cout<<i;
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
        cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}