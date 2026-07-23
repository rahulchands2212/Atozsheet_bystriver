#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp = nums[0];
        //shifting
        for(int i=0;i<nums.size()-1;i++){
            nums[i] = nums[i+1];
        }
        //assign
        nums[nums.size()-1] = temp;
    }
};