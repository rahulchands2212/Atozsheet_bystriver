#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
       int row = nums.size();
       int column = nums[0].size();
       //transpose
       for(int i=0;i<row;i++){
        for(int j=i+1;j<column;j++){
            swap(nums[i][j],nums[j][i]);
            
        }
        
       }

        //reverse
        for(int i=0;i<row;i++){
            for(int j=0;j<column/2;j++){
                int temp = nums[i][j];
                nums[i][j] = nums[i][column-1-j];
                nums[i][column-1-j] = temp;
            }
        }

        for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    }

    
};

int main(){
    vector<vector<int>>nums = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s1;
    s1.rotate(nums);
    return 0;
}