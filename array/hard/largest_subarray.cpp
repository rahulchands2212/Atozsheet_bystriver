#include<bits/stdc++.h>
using namespace std;

class bruteSolution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int len = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum = 0;
                for(int k=i;k<=j;k++){
                    sum = sum+arr[k];
                }
               
                if(sum==0){
                int index = j-i+1;
                len = max(index,len);
                }
                
            }
        }
        return len;
    }
};

//====================================================
class betterSolution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int len = 0;
        
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum = sum + arr[j];
                if(sum==0){
                    int index = j-i+1;
                    len = max(len,index);
                }

            }
        }
        return len;
        
    }
};

//======================================================
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        //prefix sum;
        unordered_map<int,int>mpp;
        mpp[0] = -1;
        int sum = 0;
        int len = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(mpp.find(sum)!= mpp.end()){
                len = max(len,i-mpp[sum]);
            }else{
                 mpp[sum] = i;
            }
         
        }
        
        return len;
    }
};

int main(){
    vector<int>nums = {1,-1};
    Solution s1;
   cout<< s1.maxLen(nums);
    return 0;
}