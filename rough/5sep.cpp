#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void firstStableIndex(vector<int>& nums,int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = *max_element(nums.begin(),nums.begin()+i+1);
            mini = *min_element(nums.begin()+i,nums.end());
            int ans = maxi-mini;
            
            if(ans<=k){
                cout<<i;
            }
            
        }
        cout<<"-1";
       
        
    }
};

int main(){
    vector<int>nums = {6,3,2,0,4,10,5};
    Solution s1;
    s1.firstStableIndex(nums,1);
    return 0;
}