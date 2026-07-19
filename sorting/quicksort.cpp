#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int partion(vector<int>&nums,int low,int high){
    int pivot = nums[low];
    int i = low;
    int j = high;
    while(i<j){
        while(i<=high && nums[i]<=pivot ){
            i++;
        }

        while( j>=low && nums[j]>pivot ){
            j--;
        }

        if(i<j){
            swap(nums[i],nums[j]);
        }

    }
    swap(nums[j],nums[low]);
    return j;
}

void quicks(vector<int>&nums,int low,int high){
    if(low<high){
        int pivotindex = partion(nums,low,high);
        quicks(nums,low,pivotindex-1);
        quicks(nums,pivotindex+1,high);
    }

}
    vector<int> quickSort(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        quicks(nums,low,high);
        return nums;
    }
};
