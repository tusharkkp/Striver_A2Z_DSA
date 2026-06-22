/*
QUESTION:
Given an array of integers nums sorted in non-decreasing order,
 find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Example:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	vector<int> searchRange(vector<int>& nums, int target) {
	int start = 0 ;
	int n = nums.size();
	int end = n-1;
	int ans = 0;
	
	while(start <= end){
		
		int mid = start + ( end - start) / 2;
		
		if(nums[mid] == target){
			ans = mid;
			int ans1 = mid;
			while(nums[ans] == target){
				ans--;
			}
			while(nums[ans1] == target){
				ans1++;
			}
			v[0] = ++ans;
			v[1] = --ans1;
			cout<<ans<<endl<<ans1;
			return {ans,ans1};
		}
		else if(nums[mid] > target){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return {-1,-1};
	
	}


vector<int> searchRange(vector<int>& nums, int target) {
    int first = lower_bound(nums.begin(), nums.end(), target)  - nums.begin();
    // if the target is not found, return [-1, -1]
    if (first == nums.size() || nums[first] != target)
        return {-1, -1};
    int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    cout <<first <<" "<<last-1;
	return {first, last-1};
}


};

int main() {

    Solution s;
    vector<int > nums = {5,7,7,8,8,10,10,10,10,10};

    s.searchRange(nums, 10);

}
