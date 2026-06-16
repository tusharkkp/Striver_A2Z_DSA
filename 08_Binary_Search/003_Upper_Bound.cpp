
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
    int n = nums.size();
    int start = 0 ; 
	int end = n - 1 ;
	int ans = n;
	
	while(end>start){
		
		int mid = start + (end - start) / 2 ;
		
		if(nums[mid] > x){
			ans = mid;
			end = mid - 1 ;
		}
		
		else{
			start = mid +1;
		}
	} 
	return ans;
    }
};



int main() {

    Solution s;

    s.name();

}
