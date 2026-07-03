class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int Xoor = 0 ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            Xoor = Xoor ^ nums[i];
        }
        return Xoor;
    }
};

