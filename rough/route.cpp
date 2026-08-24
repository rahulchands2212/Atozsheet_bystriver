#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int index = nums.size()-k;

        reverse(nums.begin()+index,nums.end());
        reverse(nums.begin(),nums.begin()+index);
        reverse(nums.begin(),nums.end());
        for(int i:nums){
            cout<<i<<" ";
        }
    }
};

int main(){
    vector<int>nums = {1,2,3,4,5,6,7};
    Solution s1;
    s1.rotate(nums,3);
    return 0;
}