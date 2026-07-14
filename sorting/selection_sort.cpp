#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={8,2,1,4,6};
    int n=5;

    int index = -1; 
    for(int i=0;i<n;i++){
        int mini = INT_MAX;
        
        for(int j=i;j<n;j++){
            if(arr[j]<mini){
                mini = min(mini,arr[j]);
                index = j;
            }
           
        }
         swap(arr[index],arr[i]);
        mini = INT_MAX;
    }

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}