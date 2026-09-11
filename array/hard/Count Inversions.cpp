#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    long long int cnt = 0;
    void merge(vector<int>nums,int low,int mid,int high){
        int i = low;
        int j = mid+1;
        vector<int>ans;

        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                ans.push_back(nums[i]);
                i++;
            }else{
                ans.push_back(nums[j]);
                cnt+=(mid-i+1);
                j++;
            }
        }

        while(i<=mid){
            ans.push_back(nums[i]);
            i++;
        }

        while(j<=high){
            ans.push_back(nums[j]);
            j++;
        }
        
    }

    void mergsort(vector<int>nums,int low,int high){
        if(low>=high){
            return ;
        }

        int mid = low+(high-low)/2;
        mergsort(nums,low,mid);     //left array 
        mergsort(nums,mid+1,high);  //right array
        merge(nums,low,mid,high);
    }

    //main
    long long int numberOfInversions(vector<int> nums){
        int low = 0;
        int high = nums.size()-1;
        mergsort(nums,low,high);
        return cnt;
    }
};

int main(){
    vector<int>nums = {2, 3, 7, 1, 3, 5};
    Solution s1;
    cout<<s1.numberOfInversions(nums);
    return 0;
}