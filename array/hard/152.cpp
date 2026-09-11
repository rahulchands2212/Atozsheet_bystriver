#include<bits/stdc++.h>
using namespace std;

class    bruteSolution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
       int ans = 0;
        
        for(int i=0;i<n;i++){
             int product = 1;
            for(int j=i;j<n;j++){
                product = product*nums[j];
                ans = max(ans,product);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxpro = INT_MIN;
        int minpro = INT_MAX;
        int pro = 1;
        for (int i = 0; i < n; i++) {
            maxpro = max(maxpro,nums[i]);
            pro *= nums[i];
            maxpro = max(maxpro,pro);
            cout<<"maxpro : index "<<endl;
            cout<<maxpro<<" "<<i<<endl;

            minpro = min(minpro,pro);
            cout<<"minpro : index "<<endl;
            cout<<minpro<<" "<<i<<endl;

            if (pro == 0) {
                pro = 1;
            }
            
        }

       
        return maxpro;
    }
};



int main(){
    Solution s1;
    vector<int>nums = {3,-1,4};
    cout<<s1.maxProduct(nums);
    return 0;
}