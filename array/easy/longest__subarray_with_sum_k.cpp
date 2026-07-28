#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int s)
    {
        // brute force first all subarray create
        int n = nums.size();
        int len = 0;
        int sum = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i; j < n; j++)
        //     {
        //          sum = 0;
        //         for (int k = i; k <= j; k++)
        //         {
        //             sum += nums[k];
        //         }
        //         if (sum == s)
        //         {
        //             len = max(j - i + 1, len);
        //         }
        //     }
        // }
        /*=========================================================*/
        // optimsed that brute force
        //  for(int i=0;i<n;i++){
        //      sum = 0;
        //      for(int j=i;j<n;j++){
        //          sum+=nums[j];
        //          if(sum==s){
        //              len = max(len,j-i+1);
        //          }

        //     }
        // }

        /*============================================================*/
        map<long long, int> mpp;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum == s)
            {
                len = max(len, i + 1);
            }

            int rem = sum - s;

            if (mpp.find(rem) != mpp.end())
            {
                int temp = i-mpp[rem];
                len  = max(len,temp);
            }

            if(mpp.find(sum) == mpp.end()){
                mpp[sum] = i;
            }
        }
        return len;
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    cout << s1.longestSubarray(nums, 3);
    return 0;
}