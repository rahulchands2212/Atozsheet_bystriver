#include<bits/stdc++.h>
using namespace std;

class mySolution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int duplicate = 0;
        int missing = 0;
        if(nums[0]!=1){
            missing=1;
        }

        for(int i = 0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                duplicate = nums[i];
            }else if(nums[i]!=nums[i+1]-1){
                missing = nums[i+1]-1;
            }
        }
        vector<int>ans = {duplicate,missing};
        return ans;

    }
};

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        long long int sum = n*(n+1)/2;
        long long int squaresum = (n*(n+1)*(2*n+1))/6;
        long long Asum = 0;
        long long Asquaresum = 0;
        for(int i:nums){
            Asum+=i;
            Asquaresum +=i*i;
        }

        long long int val1 = Asum-sum;
        long long int val2 = Asquaresum - squaresum;
        val2 = val2/val1; //x+y
        long long int x = (val2+val1)/2;
        long  long int y = val2-x;
        vector<int>ans = {(int)x,(int)y};
        return ans;
    }
};


int main(){
    Solution s1;
    vector<int>nums {4,3,6,2,1,1};
    vector<int>ans = s1.findMissingRepeatingNumbers(nums);
    for(int i:ans){
        cout<<i<<" ";
    }

}