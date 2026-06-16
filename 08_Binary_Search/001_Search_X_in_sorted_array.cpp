/*
QUESTION:-
Given an array of integers nums which is sorted in ascending order,
 and an integer target, write a function to search target in nums. If target exists,
  then return its index. Otherwise, return -1.

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: The target value 9 exists in the nums array, and its index is 4.

Example 2:
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: The target value 2 does not exist in the nums array, so return -1.
*/


#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(vector<int>& nums, int target) {
		
		int n = nums.size();
		int start = 0;
		int end = n - 1;
		
		while(end>start){
			
			int mid = start + (end - start) / 2 ;
			
			if(nums[mid] == target){
				return mid;
			}
			
			else if(nums[mid] > target){
				start = 0 ;
				end = mid ;
				mid = start + (end - start) / 2 ;
				
			}
			
			else{
				start = mid;
				end = n - 1;
				mid = start + (end - start) / 2;
			}
			
		}
		
		return -1;

}

};

int main() {

    Solution s;
    
    vector<int> nums = {-1,0,3,5,9,12};
    

    cout<<s.search(nums , 9 );

}
