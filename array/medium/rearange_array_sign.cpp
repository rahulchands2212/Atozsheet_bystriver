#include<bits/stdc++.h>
using namespace std;

//brute force;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }else{
                positive.push_back(nums[i]);
            }
        }

        int right = 0;
        nums.clear();
        while(right<positive.size() && right<negative.size()){
            nums.push_back(positive[right]);
            nums.push_back(negative[right]);
            right++;
        }

        while(right<negative.size()){
            nums.push_back(negative[right]);
            right++;
        }

        while(right<positive.size()){
            nums.push_back(positive[right]);
            right++;
        }

        return nums;
        
    }
};

