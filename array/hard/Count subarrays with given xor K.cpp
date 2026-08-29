#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraysWithXorK(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int xors = 0;
            for(int j=i;j<n;j++){
                xors = xors^nums[j];
                if(xors == k){
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    vector<int> nums = {4, 2, 2, 6, 4};
    Solution s1;
    cout << s1.subarraysWithXorK(nums, 6);
    return 0;
}