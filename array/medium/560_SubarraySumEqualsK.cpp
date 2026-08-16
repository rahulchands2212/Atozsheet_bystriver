#include <bits/stdc++.h>
using namespace std;

class bruteSolution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                sum = 0;
                for (int k = i; k <= j; k++)
                {
                    sum = sum + nums[k];
                }
                if (sum == k)
                {
                    count++;
                }
            }
        }

        return count;
    }
};


class betterSolution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {       sum = 0;
            for(int j=i;j<n;j++){
                sum = sum+nums[j];
                if(sum==k){
                    count++;
                }

            }
        }

        return count;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    betterSolution s1;
    cout << s1.subarraySum(nums, 3);
    return 0;
}