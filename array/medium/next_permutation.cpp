#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {   int index = -1;
        int n = nums.size();
        //break point
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }

        if(index==-1){      // 3 2 1
            reverse(nums.begin(),nums.end());  // 1 2 3
        }

        if(index!=-1){
            for(int i = n-1;i>index;i--){
                    if(nums[i]>nums[index]){
                        swap(nums[i],nums[index]);
                        break;
                    }
            }

            index++;
            sort(nums.begin()+index,nums.end());
        }

        for(int i:nums){
            cout<<i<<" ";
        }
    }
};

int main(){
    Solution s1;
    vector<int>nums = {1,2,9,7,6};
    s1.nextPermutation(nums);
    return 0;
}