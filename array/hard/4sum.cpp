#include <bits/stdc++.h>
using namespace std;

class bruteforceSolution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
            int n = nums.size();
        set<vector<int>>st;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                for(int k=j+1;k<n-1;k++){
                    for(int l=k+1;l<n;l++){
                        long long  int sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum == target){
                            vector<int>subans = {nums[i],nums[j],nums[k],nums[l]};
                            sort(subans.begin(),subans.end());
                            st.insert(subans);

                        }
                    }
                }
            }
        }
        vector<vector<int>>ans ={st.begin(),st.end()};
        return ans;
    }
};

//==============================================================
class betterSolution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
        int n = nums.size();
        set<vector<int>>st;

        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                   set<int>hash;
                for(int k = j+1;k<n;k++){
                    long long int sum = nums[i]+nums[j]+nums[k];
                    long long int rem = target - sum;
                    if(hash.find(rem)!= hash.end()){
                        vector<int>subans;
                        subans.push_back(nums[i]);
                        subans.push_back(nums[j]);
                        subans.push_back(nums[k]);
                        subans.push_back(rem);
                        sort(subans.begin(),subans.end());
                        st.insert(subans);
                    }
                    hash.insert(nums[k]);

                }
            }
        }
        vector<vector<int>>ans = {st.begin(),st.end()};
        return ans;
        
    }
};

//================================================================
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> st;

        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long int sum = (long long int)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum == target){
                        vector<int>subans = {nums[i],nums[j],nums[k],nums[l]};
                        st.insert(subans);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }

                        while(k<l && nums[l]== nums[l+1]){
                            l--;
                        }
                    }else if(sum<target){
                        k++;
                    }else if(sum>target){
                        l--;
                    }
                }
            }
        }
        vector<vector<int>>ans = {st.begin(),st.end()};
        return ans;

    }
};


int main()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    Solution s1;
    vector<vector<int>> ans = s1.fourSum(nums, 0);
    int row = ans.size();
    int column = ans[0].size();
    for (int i = 0; i<row;i++){
        for(int j=0;j<column;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
        return 0;
}