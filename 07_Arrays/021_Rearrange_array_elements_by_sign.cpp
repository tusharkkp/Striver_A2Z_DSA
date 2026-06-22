class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        int p = 0;
        int nn = 1;
        vector<int> ans(n,0) ;

        for(int i = 0 ; i < n ; i++){

            if(nums[i] > 0){
                ans[p] = nums[i];
                p = p+2;
            }
            else{
                ans[nn] = nums[i];
                nn = nn+2;
            }


        }
        return ans;
    }
};