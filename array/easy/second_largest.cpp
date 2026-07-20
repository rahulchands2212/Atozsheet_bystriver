#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //find max first
        int maximum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(maximum<nums[i]){
                maximum = nums[i];
            }
        }
      
        //difference jis ka sab se kam wo second last element diff !=0 hona chaye
        int index = -1;
          int diff = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int currdif = maximum-nums[i];
            if(currdif!=0 && currdif<diff){
                diff = currdif;
                index = i;
            }
        }
        
        if(index==-1){
            return index;
        }else{
            return nums[index];
        }


    }
};

