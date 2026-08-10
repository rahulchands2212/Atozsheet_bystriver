#include<bits/stdc++.h>
using namespace std;

//brute force
class bruteSolution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Your code goes here
        int row = matrix.size();
        int column = matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j] == 0){
                 
                    //set row and column -1
                    for(int r=0;r<row;r++){
                        //row
                        if(matrix[r][j]!=0){
                            matrix[r][j] = -1;        
                        }
                    }

                    for(int c=0;i<column;c++){
                        if(matrix[i][c]!=0){
                            matrix[i][c] = -1;
                        }
                    }

                   

                }
            }
        }

            //assign -1 = 0
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
               if(matrix[i][j] == -1){
                matrix[i][j]=0;
               }
            }
        }

        //print
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

//better 
class BetterSolution{
    public:
     void setZeroes(vector<vector<int>>& nums) {
        int row = nums.size();
        int column = nums[0].size();

        vector<int>erow(row,0);
        vector<int>ecolumn(column,0);

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(nums[i][j] == 0){
                    erow[i] = 1;
                    ecolumn[j] = 1;
                }
            }
        }


        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(erow[i]==1 || ecolumn[j] == 1){
                    nums[i][j] = 0;
                }
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

//optmise solution
class optimseSolution{
    public:
     void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();

        bool firstrowflag = false;
        bool firstcolumnflag = false;

        //check first row
        for(int i=0;i<column;i++){
            if(matrix[0][i]==0){
                firstrowflag = true;
                break;
            }
        }

        //check first column
        for(int j=0;j<row;j++){
            if(matrix[j][0] == 0){
                firstcolumnflag = true;
                break;
            }

        }

        //traverse matrix and mark at first row and column
        for(int i=1;i<row;i++){
            for(int j=1;j<column;j++){
                if(matrix[i][j] == 0){
                    matrix[0][i] = 0;
                    matrix[j][0] = 0;
                }
            }
        }

        for(int i=1;i<row;i++){
            for(int j=1;j<column;j++){
                    if(matrix[i][0] ==0 || matrix[0][j]==0){
                            matrix[i][j]=0;
                    }
            }
        }

        if(firstrowflag){
            for(int i=0;i<column;i++){
                matrix[0][i] = 0;
            }
        }

        if(firstcolumnflag){
            for(int i=0;i<row;i++){
                matrix[i][0] = 0;
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

     }
};
int main(){
    vector<vector<int>>matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    optimseSolution s1;
    s1.setZeroes(matrix);
    return 0;
}