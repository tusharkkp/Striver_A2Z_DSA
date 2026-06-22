#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	
	
	
	int singleNonDuplicate(vector<int>& nums) {
	
	int s = 0 ; int n = nums.size() ;
	int e = n - 1;
	
	while(s < e){
		int mid = s + (e-s) / 2;
		
		if(mid % 2 == 0){ // ie at even idx
			
			if(nums[mid] == nums[mid+1]){
				s = mid + 1;
			}else{
				e = mid;
			}
			
		}else{ // ie at odd idx
			
			if(nums[mid] != nums[mid+1]  ){
				s = mid + 1;
			}else{
				e = mid;
			}
		}
	}
	return nums[s];
	}

};



int main() {

    Solution s;
    vector<int> nums = {1,1,2,2,3,3,4,5,5};
    

    cout<<s.singleNonDuplicate(nums);

}
