#include <bits/stdc++.h>
using namespace std;

class bruteSolution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (m != 0 && n != 0)
        {
            int j = 0;
            for (int i = 0; i < m + n; i++)
            {
                if (nums1[i] >= nums2[j])
                {
                    for (int k = m - 1; k >= i; k--)
                    {
                        nums1[k + 1] = nums1[k];
                    }
                    nums1[i] = nums2[j];
                    j++;
                    n--;
                    m = nums1.size() - n;
                }
            }

            for (int i = m; i < m + n; i++)
            {
                nums1[i] = nums2[j];
                j++;
            }
        }

        for (int i : nums1)
        {
            cout << i << " ";
        }
    }
};

class shellsortSolution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int len = m + n;
        int j = 0;
        for (int i = m; i < m + n; i++)
        {
            nums1[i] = nums2[j];
            j++;
        }

        float ans = (float)len / 2;
        int gap = round(ans);
        while (gap != 1)
        {
            // pointers;
            int left = 0;
            int right = 0 + gap;
            while (right < len)
            {
                if (nums1[left] > nums1[right])
                {
                    swap(nums1[left], nums1[right]);
                }
                left++;
                right++;
            }
            ans = (float)gap / 2;
            gap = round(ans);
        }

        for (int i : nums1)
        {
            cout << i << " ";
        }
    }
};

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int k = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                int temp = nums1[i];
                nums1[i] = nums2[j];
                nums1[k] = temp;
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};
int main()
{
    vector<int> nums1 = {4, 5, 6, 0, 0, 0};
    vector<int> nums2 = {1, 2, 3};
    Solution s1;
    s1.merge(nums1, 3, nums2, 3);
    return 0;
}