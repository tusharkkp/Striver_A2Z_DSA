/*
QUESTION:-
You are given an array 'A' of size 'N' and an integer 'K'.
 You need to print the length of the longest subarray of array 'A' 
 whose sum = 'K'.

Example:
Input: 'N' = 7 'K' = 3
'A' = [1, 2, 3, 1, 1, 1, 1]
Output: 3

Explanation: Subarrays whose sum = '3' are:
[1, 2], [3], [1, 1, 1], [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final 
answer.
*/

#include <bits/stdc++.h>

using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        // int sum = 0;
        int maxi = 0;
        
        for(int start = 0 ; start < n ; start++){
            for(int end = start ; end < n ; end++){
                int sum = 0;
                for(int i = start ; i <= end ; i++){
                    // cout<<nums[i];
                    sum+= nums[i];
                }
                // cout<<",";
                if(sum == k){
                    maxi = max(maxi , end - start + 1);
                }
                
            }
            // cout<<endl;
        }
        return maxi;
    }
};



class Solution2{
public:
    int longestSubarray2(vector<int> &nums, int k){
        int n = nums.size();
        // int sum = 0;
        int maxi = 0;
        
        for(int start = 0 ; start < n ; start++){
            for(int end = start ; end < n ; end++){
                int sum = 0;
//                for(int i = start ; i <= end ; i++){
                    // cout<<nums[i];
                    sum+= nums[end];
//                }
                // cout<<",";
                if(sum == k){
                    maxi = max(maxi , end - start + 1);
                }
                
            }
            // cout<<endl;
        }
        return maxi;
    }
};



int main() {

    Solution2 s;
    
    vector<int> nums = {1, 2, 3, 4,5,6,7};
    

    cout<<s.longestSubarray2(nums,5);

}
