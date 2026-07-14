#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

// for(int i=0;i<(n/2)+1;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// //lower part 
// for(int i=0;i<(n/2);i++){
//     for(int j=0;j<(n/2)-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//striver it write  code for n = 5 ; i write code for n = 9
for(int i=1;i<=2*n-1;i++){
    int star = i;
    if(i>n)  star = 2*n-i;
    for(int j=1;j<=star;j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}