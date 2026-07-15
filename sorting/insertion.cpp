#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={14,9,15,12,6,8,3};
    int n = 7;

    //method 1
    // for(int i=1;i<n;i++){
    //     int prev = i-1;
    //    int  current = arr[i];
    //    while(prev>=0 && arr[prev]>current){
    //     arr[prev+1] = arr[prev];
    //     prev--;
    //    }
    //    arr[prev+1]=current;
    // }


    //method 2
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }



    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;
}

/*
Method 1:  (method 1 is better )
- Current element ko temporary variable me store karte hain.
- Bade elements ko right shift karte hain.
- Last me current ko uski correct position par insert karte hain.
- Ye standard aur efficient implementation hai.

Method 2:
- Current element ko store nahi karte.
- Adjacent elements ko baar-baar swap karke current ko correct position tak le jaate hain.
- Logic simple hai, lekin swaps zyada hote hain.
*/