#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int profit = 0;
        int costprice = nums[0];
        for(int i=1;i<n;i++){
            costprice = min(costprice,nums[i]);
            profit = max(profit,nums[i]-costprice);
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