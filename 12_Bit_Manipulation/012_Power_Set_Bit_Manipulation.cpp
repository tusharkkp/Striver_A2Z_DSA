// TC ::: O( N * 2 ^ N)

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n = nums.size(); //size of input array
        int subsets = 1<<n; // total no of possible sybsets(ALL incl)

        vector<vector<int>> ans; // (2D arr ANSWER)

        for(int i = 0 ; i < subsets ; i++){ // loop over 1 << n subsets

            vector<int>subset; // 1D arr of indv subset

            for(int j = 0 ; j < n ; j++){ // loop over n size 

                if(i & (1<<j)){ // BM - (1<<j)
                    subset.push_back(nums[j]);
                }
            }

            ans.push_back(subset);
        }
        return ans;
    }
};