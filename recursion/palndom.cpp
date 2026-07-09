#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string as;
        for(int i: s){
            if(isalpha(i)){
                as+=i;
            }
        }
        s=as;
           int r = 0;
        int l = s.size();
        bool ans;
        while(r<l/2){
            if(s[r]==s[l-1-r]){
                ans = true;
            }else{
                ans = false;
                return ans;
            }
            r++;
        }
        return ans;
        
    }
};


int main(){
    string s = "A man, a plan, a canal: Panama";
    Solution s1;
   cout<< s1.isPalindrome(s);
    return 0;
}