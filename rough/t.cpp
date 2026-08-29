#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (count == 0) {
                candidate = nums[i];
                count++;
            } else if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        //verify
         count = 0;
        for(int i=0;i<n;i++){
            if(candidate == nums[i]){
                count++;
            }
        }

        if(count>n/2){
            return candidate;
        }
        return -1;
    } 
};

int main(){
    vector<int>nums = {3,3,4};
    Solution s1;
    cout<<s1.majorityElement(nums);
    return 0;
}