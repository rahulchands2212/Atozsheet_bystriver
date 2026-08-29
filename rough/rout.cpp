#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i + 1; j < matrix[0].size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse
        int n = matrix[0].size() ;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < n/2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n -1- j];
                matrix[i][n -1- j] = temp;
            }
        }

        //print 
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<=n;j++){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
};

int main(){
    vector<vector<int>>nums = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s1;
    s1.rotate(nums);
    return 0;
}