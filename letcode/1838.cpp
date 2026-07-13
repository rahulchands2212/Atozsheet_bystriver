#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        vector<int>temp = nums;
        int r = k;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    int def = nums[j]-nums[i];
                    if(def<=k){
                        nums[i]=nums[i]+def;
                        k = k-def;
                    }
                }
            }
        }

      unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }

        int maximum = INT_MIN;
        for(auto i : mpp){
           maximum =  max(maximum,i.second);
        }

        return maximum;
        
    }
};


int main(){
    vector<int>nums = {1,2,3,4};

    Solution s1;
   cout<< s1.maxFrequency(nums,3);

    return 0;
}