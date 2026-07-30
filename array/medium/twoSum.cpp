#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int  n = nums.size();
        vector<int>ans;
        //brute force tc => 0(n^2) and sc => 0(1) only data present in 2 index;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j =i+1;j<n;j++){
                if(j<n){
                    sum = nums[i] + nums[j];
                    if(sum == target){
                        ans.push_back(i);
                        ans.push_back(j);
                    }

                    sum = 0;
                }
            }
        }
        return ans;
        
    }
};

int main(){
    vector<int>nums = {1,5,9,7,8,3};
    Solution s1;
    s1.twoSum(nums,11);
    return 0;
}