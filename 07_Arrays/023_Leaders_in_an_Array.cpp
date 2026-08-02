
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n  = nums.size(); 
        int max = nums[n-1];
        vector<int> ans;
        ans.push_back(max);

        for(int i = n -2 ; i >= 0 ; i--){
            if(nums[i] > max){
                ans.push_back(nums[i]);
                max = nums[i];
            }
        }

        reverse(ans.begin() , ans.end());      

        return ans;
    }
};



class Solution1 {
public:
    vector<int> leaders(vector<int>& nums) {
        int n  = nums.size(); 
        vector<int> ans;  
        vector<int> temp = nums; 
        for(int i = 0  ; i  <n ; i++){
            sort(temp.begin()+i+1 , temp.end());
            if(nums[i] > temp[n-1]){
                ans.push_back(nums[i]);
            }
            temp = nums;
        }
        ans.push_back(nums[n-1]);
        return ans;
      
    }
};
