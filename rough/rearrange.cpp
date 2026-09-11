#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int starting_point  = -1;
        //starting point set 
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                starting_point = i;
                break;
            }
        }

        //ending 
        if(starting_point!=-1){
        for(int i=starting_point;i<n;i++){
            if(nums[i]>0){
                int temp = nums[i];
                int j = i;
                while(j>starting_point){
                    nums[j] = nums[j-1];
                    j--;
                }
                nums[j] = temp;
                starting_point++;
            }
        }
        }

   

        

        return nums;
    }
};

int main(){
    vector<int>nums  = {3,1,-2,-5,2,-4};
    Solution s1;
    vector<int>ans  = s1.rearrangeArray(nums);
    for(int i :ans){
        cout<<i<<" ";
    }
}