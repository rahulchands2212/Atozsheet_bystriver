#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"enter "<<n<<" elements on array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int>mpp;
    for(int i:arr){
        mpp[i]++;
    }

    int maximum = INT_MIN;
    int mininum = INT_MAX;

    for(auto i:mpp){
        maximum = max(maximum,i.second);
         mininum = min(mininum,i.second);
    }

    cout<<"max "<<endl;
    for(auto i : mpp){
        if(maximum==i.second){
            cout<<i.first<<" ";
        }
    }

    cout<<endl;

    cout<<"min"<<endl;
     for(auto i : mpp){
         if(mininum==i.second){
            cout<<i.first<<" ";
        }
    }

    return 0;
}