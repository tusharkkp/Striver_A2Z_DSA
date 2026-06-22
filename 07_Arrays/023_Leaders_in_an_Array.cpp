class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n  = nums.size(); 
        vector<int> ans;   
        for(int i = 0  ; i  <n ; i++){
            if(nums[i] > max(nums[i+1] ,nums[n-1])){
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        return ans;
      
    }
};