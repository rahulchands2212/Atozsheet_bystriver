#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            return 1;
        }
        int i=0;
        for(int j=1;j<arr.size();j++){
            if(arr[j]-arr[i]>1){
                return arr[i]+1;
            }
            i++;
        }
        
        return arr[i]+1;
       
    }
};