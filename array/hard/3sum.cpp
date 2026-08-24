#include <bits/stdc++.h>
using namespace std;

//by striver sir
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> subans;
        set<vector<int>>st;
       
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
                        st.insert(subans);
                        
                        subans.clear();
                    }
                }
            }
        }
         vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

class betterSolution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();

        set<vector<int>> st;
        for (int i = 0; i < n; i++)
        {
            set<int> mpp;
            for (int j = i + 1; j < n; j++)
            {
                int sum = nums[i] + nums[j];
                int rem = 0 - sum;
                if (mpp.find(rem) != mpp.end())
                {
                    vector<int> subans;
                    subans.push_back(nums[i]);
                    subans.push_back(nums[j]);
                    subans.push_back(rem);
                    sort(subans.begin(), subans.end());
                    st.insert(subans);
                }
                mpp.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

class optmiseSolution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();

        set<vector<int>> st;
        for (int i = 0; i < n; i++)
        {
            set<int> mpp;
            for (int j = i + 1; j < n; j++)
            {
                int sum = nums[i] + nums[j];
                int rem = 0 - sum;
                if (mpp.find(rem) != mpp.end())
                {
                    vector<int> subans;
                    subans.push_back(nums[i]);
                    subans.push_back(nums[j]);
                    subans.push_back(rem);
                    sort(subans.begin(), subans.end());
                    st.insert(subans);
                }
                mpp.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
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