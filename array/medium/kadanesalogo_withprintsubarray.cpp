#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = INT_MIN;
        int n = nums.size();

        int start = 0;
        int end = 0;
        int tempstart = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];

            if (maxi < sum)
            {
                maxi = sum;
                start = tempstart;  //when we find max then we confirmed start index
                end = i;
            }

            if (sum < 0)
            {
                sum = 0;
                tempstart = i + 1;  //assume start with that index
            }
        }

        for (int i = start; i <= end; i++)
        {
            cout << nums[i] << " ";
        }
        cout << " = ";

        return maxi;
    }
};

int main()
{
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    Solution s1;
    cout << s1.maxSubArray(nums);
    return 0;
}