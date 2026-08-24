#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
              int n = nums.size();
        vector<int>subans;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              int sum = nums[i]+nums[j];
              int rem = 0-sum;

                for(int k=j+1;k<n;k++){
                    if(nums[k]==rem){
                        subans.push_back(nums[i]);
                        subans.push_back(nums[j]);
                        subans.push_back(nums[k]);
                        sort(subans.begin(),subans.end());
                        bool found = false;
                        for(int s=0;s<ans.size();s++){
                            if(ans[s]==subans){
                                found = true;
                                break;
                            }
                        }
                        if(!found){
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

int main(){
    Solution s1;
    vector<int>nums = {-1,2,-1,4,2};
    vector<vector<int>>ans = s1.threeSum(nums);
    int row = ans.size();
    int column = ans[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}