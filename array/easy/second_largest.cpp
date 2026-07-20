#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //find max first
        // int maximum = nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(maximum<nums[i]){
        //         maximum = nums[i];
        //     }
        // }
      
        // approch 1 => difference jis ka sab se kam wo second last element diff !=0 hona chaye it take 0(2n);
        // int second = -1;
        //   int diff = INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     int currdif = maximum-nums[i];
        //     if(currdif!=0 && currdif<diff){
        //         diff = currdif;
        //         second = nums[i];
        //     }
        // }

        // return second;
/*==============================================================================================*/

        //approch 2 => compare with second it take 0(2n);
        // int second = -1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>second && nums[i]<maximum){
        //         second = nums[i];
        //     }
        // }

        // return second;
/*============================================================================================================*/
        //best optimise approch => largest or second ek sath check it take 0(n)
          int largest = nums[0];
        int second = -1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest && largest!=nums[i]){
                second = largest;
                largest = nums[i];
            }else if(nums[i]>second && nums[i]!=largest){
                second = nums[i];
            }
        }

        return second;
    }
};

int main(){
    Solution s1;
    vector<int>nums = {8, 8, 7, 6, 5};
    cout<<s1.secondLargestElement(nums);
    return 0;
}