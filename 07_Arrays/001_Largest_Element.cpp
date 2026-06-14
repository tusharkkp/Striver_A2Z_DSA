#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
    	
    	int l = nums[0];
    	
    	
    	//O(N)
    	for(int i = 0 ; i < nums.size() ; i++){
    		
//    		for(int )
			if(nums[i] > l){
				l = nums[i];
			}
		}
		
		
		//O(NlogN)
		
//		sort(nums.begin(), nums.end());
//		return nums[nums.size()-1];
		
		
		return l;

    }
};

int main() {

    Solution s;

    s.name();

}
