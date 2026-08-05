#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int profit = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                    int curr = nums[j]-nums[i];
                    profit = max(profit,curr);
                
            }
        }
        return profit;
    }

};

int main(){
    vector<int>nums = {1,5,6,9,4};
    Solution s1;
    cout<<s1.maxProfit(nums);
    return 0;
}