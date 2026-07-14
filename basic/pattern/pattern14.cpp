#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter n : ";
cin>>n;

// for(char i=65;i<65+n;i++){
//     //A = 65 starting 
//     for(char j=65;j<=i;j++){
//         cout<<j;
//     }
   
//     cout<<endl;
// }

for(int i=0;i<n;i++){
     
    for(char ch='A';ch<='A'+i;ch++){
        cout<<ch;
    }
   
    cout<<endl;
}


return 0;
}