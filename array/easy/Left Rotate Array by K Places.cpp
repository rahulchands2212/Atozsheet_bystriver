#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        // //brute force 
        // vector<int>temp;
        // //store
        // for(int i=0;i<k;i++){
        //     temp.push_back(nums[i]);
        // }
        // //shifting
        // for(int i=k;i<nums.size();i++){
        //     nums[i-k] = nums[i];
        // }
        
        // //update
        // for(int i=nums.size()-k ; i<nums.size() ;i++){
        //     nums[i] = temp[i-(nums.size()-k)];
        // }

        // //print
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }

        //optimsed
        k=k%nums.size();
      reverse(nums.begin(),nums.begin()+k);
      reverse(nums.begin()+k,nums.end());
      reverse(nums.begin(),nums.end());

       for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }

    }
};

int main(){
    Solution s1;
    vector<int>nums = {1,2,3,4,5,6,7};
    s1.rotateArray(nums,3);
    return 0;

}