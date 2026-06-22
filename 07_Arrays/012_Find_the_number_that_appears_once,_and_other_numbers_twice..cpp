/*
QUESTION:-
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.


Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4
*/

//TC = O(N)
//&&
//SC = O(1)

#include <bits/stdc++.h>

using namespace std;
//1st way.....................................
class Solution{
public:
	int singleNumber(vector<int> &nums){
		
		sort(nums.begin() , nums.end());
		
		int n = nums.size();
		
		for(int i = 0 ; i < n ; i = i+2 ){
			
			if(i+1 == n){
				return nums[n-1];
			}
			
			if(nums[i] != nums[i+1]){
				return nums[i];
			}
			
		}
		
	}

//2nd wayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy

//int singleNumber(vector<int> &nums)
//{
//    int xr = 0;
//    for (int i = 0; i < nums.size(); i++)
//    {
//        xr = nums[i] ^ xr;
//    }
//    return xr;
//}
//


};




int main() {

    Solution s;
    vector<int> n = {4,1,2,3,1,2,4};

    cout<<s.singleNumber(n);

}
