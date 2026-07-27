#include<bits/stdc++.h>
using namespace std;

/* approch 1 => brute force linear search 
approch 2 => hashing
approch 3 => maping
approch 4 => xor
*/

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
       int xorr = 0;
       for(int i=0;i<nums.size();i++){
        xorr = xorr^nums[i];
       }
       return xorr;

    }
};