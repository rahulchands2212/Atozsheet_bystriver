#include<bits/stdc++.h>
using namespace std;

void selectionrecursive(vector<int>&nums,int low,int high){
    if(low>=high){
        return;
    }
        int mini = low;
    for(int i=low+1;i<=high;i++){
        if(nums[mini]>nums[i]){
            mini = i;
        }
    }

    swap(nums[mini],nums[low]);
    selectionrecursive(nums,low+1,high);
}

int main(){
    vector<int>nums = {3,2,4,1,3};
    int low=0;
    int high = nums.size()-1;
    selectionrecursive(nums,low,high);

    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;
}