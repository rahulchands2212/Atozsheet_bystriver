#include<bits/stdc++.h>
using namespace std;

//brute force
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int>ans;
      int n = nums.size();
      for(int i=0;i<n;i++){
        bool king = true;
        for( int j=i+1;j<=n;j++){
            if(nums[i]<nums[j]){
                king = false;
                break;
            }
        }
        if(king){
            ans.push_back(nums[i]);
        }
         
      }

      return ans;
    }
};

//optimise
class oSolution {
public:
    vector<int> leaders(vector<int>& nums) {
            vector<int>ans;
      int n = nums.size();
      int maximum = INT_MIN;
      for(int i=n-1;i>=0;i--){
         if(maximum<nums[i]){
            ans.push_back(nums[i]);
            maximum = nums[i];
        }
       
      }

      reverse(ans.begin(),ans.end());

      return ans;
    }
};


int main(){
    vector<int>nums = {1,2,5,3,1,2};
    oSolution s1;
    vector<int>ans = s1.leaders(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}