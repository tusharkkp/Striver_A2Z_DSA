/*
QUESTION:-
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is 
missing from the array.

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 
2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 
2 is the missing number in the range since it does not appear in nums.
*/


#include <bits/stdc++.h>

using namespace std;

//1. O(N) ..........................................

//class Solution{
//public:
//int missingNumber(vector<int> &nums){
//	
//	int n = nums.size();
//	
//	vector<int> temp = {0};
//	
//	for(int i = 0 ; i < n ; i++){
//		
//		temp[nums[i]] = 1;
//		
//	}
//	
//	for(int j =0 ; j < n ; j++){
//		
//		if(temp[j] == 0){
//			return j;
//		}
//		
//	}
//}
//
//};


//2. Optimal WAYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY


class Solution {
	public:
		int missingNumber(vector<int> &nums){
			int n = nums.size();
			
			long long actual_sum = n * (n + 1) / 2 ;
			long long sum = 0 ; 
			
			for(int i = 0 ; i < n ; i++){
				sum = sum + nums[i];
			}
			
			return actual_sum - sum;
		}
};



int main() {

    Solution s;
	vector<int> num = {1,2,0,3,6,4};
    cout<<s.missingNumber(num);

}
