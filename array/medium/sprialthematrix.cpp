#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sprialmatrix(vector<vector<int>> &nums)
    {
        int left = 0;
        int right = nums[0].size() - 1;
        int top = 0;
        int bottom = nums.size() - 1;
        vector<int> ans;

        while (left <= right && top <= bottom)
        {
            // left --> right
            for (int i = left; i <= right; i++)
            {
                ans.push_back(nums[top][i]);
            }
            top++;

            // top --> bottom
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(nums[i][right]);
            }
            right--;

            // right-->left
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(nums[bottom][i]);
                }
                bottom--;
            }

            // bottom --> top
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(nums[i][left]);
                }
                left++;
            }
        }

        for (int i : ans)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    vector<vector<int>> nums = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}, {31, 32, 33, 34, 35, 36}};
    Solution s1;
    s1.sprialmatrix(nums);
    return 0;
}