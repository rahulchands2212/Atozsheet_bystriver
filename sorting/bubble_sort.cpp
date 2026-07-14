#include<bits/stdc++.h>
using namespace std;

/*TC :-
same like selection sort n^2 for worst and average case
but we can optimise for best case : 
if the array is sort in asc order only check for n-1 if no swap perform then break;

best case = 0(n)
worst case = 0(n^2)
average case = 0(n^2)
*/

int main(){
    int arr[]={5,4,6,8,2};
    int n=5;
    for(int i=0;i<n-1;i++){
        bool didswap = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                didswap=true;
            }
        }
        if(!didswap){
            break;
        }
    }

    for(int i: arr){
        cout<<i<<" ";
    }

    return 0;
}
