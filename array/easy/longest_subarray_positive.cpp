#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        //tc=>2n;
      int sum = 0;
      int len = 0;
      int left = 0;
      int right = 0;
      int n = nums.size();
      while( right<n){
         sum+=nums[right];
        while(sum>k){
            sum = sum-nums[left];
            left++;
        }
        if(sum==k){
            len  = max(len,right-left+1);
        }
       
        right++;
      }
        return len;
    }
};



int main(){
    Solution s1;
    vector<int>nums = {10, 5, 2, 7, 1, 9};
    cout<<s1.longestSubarray(nums,15);
    return 0;
}