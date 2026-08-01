#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //--------------first approch come in my mind------------
        unordered_map<int,int>mpp;
        for(int i : nums){  
            mpp[i]++;
        }

        int freq = INT_MIN;
        for(auto i:mpp){
            freq = max(freq,i.second);
        }

        for(auto i:mpp){
            if(freq==i.second){
                return i.first;
            }
        }
    }
};