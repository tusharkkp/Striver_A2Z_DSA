#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
    	
    	for(int i = 0 ; i < nums.size() ; i++){
    		
    		int curr = nums[i];
    		int prev = i - 1;
    		
//    	if in decresing order	nums[prev] < curr ){
			while( prev >= 0 && nums[prev] > curr ){
				
				swap(nums[prev],nums[prev+1]);
				
				prev--;
				
			}
    		
		}
		
		return nums;

    }
};

int main() {

    Solution s;
	vector<int> u = {1,5,4,2,3};
    s.insertionSort(u);
	
	for(int i : u){
		cout<<i;
	}
}
