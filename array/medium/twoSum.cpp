#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // int  n = nums.size();
        // vector<int>ans;
        // brute force tc => 0(n^2) and sc => 0(1) only data present in 2 index;
        // for(int i=0;i<n;i++){
        //     int sum = 0;
        //     for(int j =i+1;j<n;j++){
        //         if(j<n){
        //             sum = nums[i] + nums[j];
        //             if(sum == target){
        //                 ans.push_back(i);
        //                 ans.push_back(j);
        //             }

        //             sum = 0;
        //         }
        //     }
        // }
        // return ans;
        /*--------------------------------- better approch think by me ------------------------------------------------*/
        // vector<int> v2 = nums;
        // sort(v2.begin(), v2.end());
        // int low = 0;
        // int high = nums.size() - 1;
        // int sum = 0;
        // int num1, num2;
        // // sum
        // while (low < high)
        // {
        //     sum = v2[low] + v2[high];

        //     if (sum == target)
        //     {
        //         num1 = v2[low];
        //         num2 = v2[high];
        //         break;
        //     }
        //     else if (sum < target)
        //     {
        //         low++;
        //     }
        //     else
        //     {
        //         high--;
        //     }
        // }
        // // search
        // int n = nums.size();
        // int first = -1;
        // int second = -1;
        // vector<int> ans;

        // for (int i = 0; i < n; i++)
        // {
        //     if (nums[i] == num1 && first == -1)
        //     {
        //         first = i;
        //     }
        //     else if (nums[i] == num2)
        //     {
        //         second = i;
        //     }
        // }
        //     ans.push_back(first);
        //      ans.push_back(second);
           
        // return ans;

        /*----------------------------------------- better approch by sir -------------- using hash --*/
        map<int,int>mpp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int current = nums[i];
            int rem = target - current;
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem],i};
            }
            mpp[current] = i;
        }
        return {-1,-1};
    
    }
};

int main()
{
    vector<int> nums = {1, 5, 8, 4, 3, 5};
    Solution s1;
    vector<int>ans = s1.twoSum(nums, 11);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}