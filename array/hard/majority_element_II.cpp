#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
            int i =0;
             int count = 0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }else{
                    if(count>n/3){
                        ans.push_back(nums[i]);
                    }

                    i = j;
                    count = 0;
                    j--;
                }
            }
             if(count>n/3){
                ans.push_back(nums[i]);
            }
            
        return ans;
    }
    
};


int main(){
    vector<int>nums = {1,2,2,3,2,1,1};
    Solution s1;
    vector<int>ans = s1.majorityElementTwo(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}