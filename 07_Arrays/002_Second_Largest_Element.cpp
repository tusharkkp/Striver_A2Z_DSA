#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
    	
	int large = nums[0];
	int secL = -1;
	
	for(int i = 0 ; i < nums.size() ; i++){
		
		if(nums[i] > large){
			large = nums[i];
		}
	}
	
//	int le = INT_MIN,se = INT_MAX;
//	for(int i = 0 ; i < nums.size() ; i++){
//		
//		le = max(le,nums[i]);
//		se = min(se, nums[i] );
//	}
	
	for(int i = 0 ; i < nums.size() ; i++){
		
		if(nums[i] > secL && nums[i] != large ){
			
			secL = nums[i];
		}
	}
	
	return secL;
    }
};


int main() {

    Solution s;

    s.name();

}
