#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void removeDuplicates(vector<int>& nums) {
        //brute force
        int n = nums.size();
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                    if(count>=2 ){
                        for(int k = j;k<n-1;k++){
                            //shifting
                            nums[k]=nums[k+1];
                        }
                        nums.pop_back();
                        n=nums.size();
                    }
                }

            }

        }

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }


    }
};

int main(){
    vector<int>nums ={1,2,2,2,3,3,4,4,4,5};
    Solution s1;
    s1.removeDuplicates(nums);
    return 0;
}