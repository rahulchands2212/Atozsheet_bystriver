#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> subans;
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                for (int k = j + 1; k < n; k++)
                {

                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum == 0)
                    {
                        subans.push_back(nums[i]);
                        subans.push_back(nums[j]);
                        subans.push_back(nums[k]);
                        sort(subans.begin(), subans.end());
                        bool found = false;
                        int lenans = ans.size();
                        for (int s = 0; s < lenans; s++)
                        {
                            if (ans[s] == subans)
                            {
                                found = true;
                                break;
                            }
                        }
                        if (!found)
                        {
                            ans.push_back(subans);
                        }
                        subans.clear();
                    }
                }
            }
        }
        return ans;
    }
};

class optmiseSolution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> subans;
        vector<vector<int>> ans;
        // mapping
        map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++; // value -> frequeny
        }

        for (int i = 0; i < n - 1; i++) {
            mpp[nums[i]]--; // map se freq reduce because of selected
            for (int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j];
                int rem = 0 - sum;
                mpp[nums[j]]--; // map se freq reduce because of selected
                if (mpp[rem] > 0) {
                    subans.push_back(nums[i]);
                    subans.push_back(nums[j]);
                    subans.push_back(rem);
                    sort(subans.begin(), subans.end());
                    if (ans.empty()) {
                        ans.push_back(subans);
                    } else {
                        bool found = false;
                        for (int i = 0; i < ans.size(); i++) {
                            if (ans[i] == subans) {
                                found = true;
                                break;
                            }
                        }

                        if (!found) {
                            ans.push_back(subans);
                        }
                    }

                    subans.clear();
                }
                mpp[nums[j]]++;
            }
            mpp[nums[i]]++;
        }

        return ans;
    }
};
int main()
{
    optmiseSolution s1;
    vector<int> nums = {-1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4};
    vector<vector<int>> ans = s1.threeSum(nums);
    int row = ans.size();
    int column = ans[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}