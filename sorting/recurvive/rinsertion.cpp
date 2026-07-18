#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

void fn(vector<int>&nums,int low,int high){
    int prev = low-1;
    int current = nums[low];
    if(low>high){
        return;
    }

    
    while(prev>=0 && nums[prev]>current){
        nums[prev+1] = nums[prev];
        prev--;
      
    }
        nums[prev+1]=current;

    fn(nums,low+1,high);
}
    vector<int> insertionSort(vector<int>& nums) {
       int high = nums.size()-1;
       int low = 1;
        fn(nums,low,high);
        return nums;
    }
};


int main(){
    Solution s1;
    vector<int>nums = {3,2,4,1,3};
    s1.insertionSort(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
    return 0;
}