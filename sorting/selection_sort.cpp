#include<bits/stdc++.h>
using namespace std;


/* tc - 
loop run 
n,n-1,n-2,n-3 ................
so n+(n-1)+(n-2)+(n-3)...................
seen this pattern we add that with the adding of n natural number formula  (n*n+1)/2;
(n^2)/2 + n/2;
remove small value 
(n^2)/2
remove constant
n^2;  <=== this is TC


best case = 0(n^2)
worst case = 0(n^2)
average case = 0(n^2)
 */

int main(){
    int arr[]={8,2,1,4,6};
    int n=5;

   
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
           
        }
         swap(arr[mini],arr[i]);
        mini = INT_MAX;
    }

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}