#include <bits/stdc++.h>
using namespace std;

void fn(vector<int> &nums, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    if (nums[low + 1] < nums[low])
    {
        swap(nums[low + 1], nums[low]);
    }

    fn(nums, low + 1, high);    // Continue current bubble pass

    if(low==high-1){         // Last comparison of this pass completed
        fn(nums, 0, high - 1);  // Start next bubble pass
    }
    
}

int main()
{
    vector<int> nums = {3, 2, 4, 1, 3};
    fn(nums, 0, 4);
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}