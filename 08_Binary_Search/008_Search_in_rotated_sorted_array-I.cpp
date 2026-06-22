/*
QUESTION:
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot 
index k (1 <= k < nums.length) such that the resulting
 array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
 For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target 
if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

#include <bits/stdc++.h>

using namespace std;
//
//class Solution{
//public:
//	int search(vector<int>& nums, int target) {
//	 int start = 0;
//	 int n = nums.size();
//	 int end = n - 1;
//	
//	return search(nums, target , start , end);
//	
//	}
//	
//	int search(vector<int>& nums, int target , int start , int end) {
//	
//		if(start > end){
//			return -1;
//		}
//	
//		 int n = nums.size();
//	 
//	 	int mid = start + (end - start) / 2;
//	 	
//	 	if(nums[mid] == target){
//	 		return mid;
//		 }
//	 	
//	 	if(nums[start] <= nums[mid]){//L1
//	 		
//	 		if(nums[start] <= target && nums[mid] >= target){ // L1 left part
//	 			return search(nums , target , start , mid - 1);
//			 }
//			 else{ // L1 right part
//			 	return search(nums , target , mid + 1 , end);
//			 }
//	 		
//		 }
//		 
//		 else{ // L2
//		 	if(nums[mid] <= target && target <= nums[end]){// L2 right part
//		 		return search(nums, target , mid + 1 , end);
//			 }
//			 else{
//			 	return search(nums , target , start , mid - 1);
//			 }
//		 	
//		 
//		 }
//	 	
//	return -1;
//	
//	}	
//	
//};


class Solution {
public:
    // Function to search for target using binary search in rotated sorted array
    int search(vector<int>& nums, int target) {

        // Set the search space to entire array
        int low = 0;
        int high = nums.size() - 1;

        // Continue until the search space becomes invalid
        while (low <= high) {

            // Find the middle index
            int mid = (low + high) / 2;

            // If the target is found at mid, return mid
            if (nums[mid] == target)
                return mid;

            // Check if the left half is sorted
            if (nums[low] <= nums[mid]) {

                // If target lies in the sorted left half, search there
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                }
                // Else search in the right half
                else {
                    low = mid + 1;
                }
            }

            // Otherwise, right half is sorted
            else {

                // If target lies in the sorted right half, search there
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                }
                // Else search in the left half
                else {
                    high = mid - 1;
                }
            }
        }

        // If not found, return -1
        return -1;
    }
};

int main() {

    Solution s;
    vector<int> nums = {2,3,0,0,1,1,1,1,1};

    cout<<s.search(nums, 10);

}
  