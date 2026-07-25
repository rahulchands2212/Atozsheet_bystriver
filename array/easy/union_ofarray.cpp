#include <bits/stdc++.h>
using namespace std;

void unionArray(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0;
    vector<int> temp;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            if (temp.empty() || temp.back() != nums1[i])
            {
                temp.push_back(nums1[i]);
            }
             i++;
                j++;
        } 
        else if (nums1[i] < nums2[j])
        {
            if ( temp.empty() || temp.back() != nums1[i])
            {
                temp.push_back(nums1[i]);
                
            }
            i++;
        }
        else
        {
            if (temp.empty() || temp.back() != nums2[j])
            {
                temp.push_back(nums2[j]);
               
            }
             j++;
        }
    }

    while (i < nums1.size())
    {
        if (temp.empty() || temp.back() != nums1[i])
        {
            temp.push_back(nums1[i]);
           
        }
         i++;
    }

    while (j < nums2.size())
    {
        if (temp.empty() || temp.back() != nums2[j])
        {
            temp.push_back(nums2[j]);
           
        }
         j++;
    }

    for (int i : temp)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> nums1 = {3, 4, 6, 7, 9, 9};
    vector<int> nums2 = {1, 5, 7, 8, 8};
    unionArray(nums1, nums2);
}