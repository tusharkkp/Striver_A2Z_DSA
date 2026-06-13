#include <bits/stdc++.h>

using namespace std;

class Solution {
	
public:
	
    vector<int> bubbleSort(vector<int>& nums) {
    
//    for(int i = 0             ; i < n-1; i++)
    for(int i = nums.size() - 1 ; i >= 0 ; i--){
    	
    	bool isswap = false;
    	
//    	for(int j = 0 ; j < n - 1 - i ;j++)
    	for(int j = 0 ; j <= i - 1 ; j++){
    		
    		if(nums[j] > nums[j+1]){
    			
    			swap(nums[j], nums[j+1]);
    			
    			isswap = true;
    			
			}
    	
		}
    	
	}
	
	if(isswap == false){
		return nums;
	}
    
    return nums;
    
    }
    
};



int main() {

    Solution s;
	
	vector<int> nums = {3,2,6,1};
	
	
    s.bubbleSort(nums);
    
    for(int i : nums){
    	cout<<i;
	}

}
