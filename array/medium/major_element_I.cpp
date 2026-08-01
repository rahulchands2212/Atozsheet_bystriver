#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        //--------------first approch come in my mind------------
        // unordered_map<int,int>mpp;
        // for(int i : nums){
        //     mpp[i]++;
        // }

        // int freq = INT_MIN;
        // for(auto i:mpp){
        //     freq = max(freq,i.second);
        // }

        // for(auto i:mpp){
        //     if(freq==i.second){
        //         return i.first;
        //     }
        // }

        // ------------ optimised first version -----------
        //  unordered_map<int,int>mpp;
        //     int freq = INT_MIN;
        //     int ans = -1;
        // for(int i : nums){
        //     mpp[i]++;
        //     if(mpp[i] > freq){
        //         freq = mpp[i];
        //         ans = i;
        //     }
        // }
        // return ans;

        // ------- optimised -------------
                int el = nums[0];
                int count = 0;
                //more voting algo
                for (int i = 0; i < nums.size(); i++)
                {
                    if (el == nums[i])
                    {
                        count++;
                    }
                    else
                    {
                        count--;
                    }

                    if (count == 0)
                    {
                        el = nums[i + 1];
                    }
                }

                // verif
                count = 0;
                for (int i = 0; i < nums.size(); i++)
                {
                    if (el == nums[i])
                    {
                        count++;
                    }
                }

                if (count > nums.size() / 2)
                    return el;
                return -1;
        
    }
};