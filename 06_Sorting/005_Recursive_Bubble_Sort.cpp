#include <bits/stdc++.h>

using namespace std;

// // 1. Brut Force

// class Solution {
// public:
	
// 	    vector<int> bubbleSort(vector<int>& nums, int n) {
    	
// //    	int n = nums.size();
    	
//     	if(n <=1){
//     		return nums;
// 		}
		
// 		for(int i = 0 ; i < n-1 ; i++){
			
// 			if(nums[i]>nums[i+1]){
// 				swap(nums[i],nums[i+1]);
// 			}
			
// 			n--;
// 			bubbleSort(nums,n);
			
// 		}
    	
//     	return nums;

//     }
	
	
//     vector<int> bubbleSort(vector<int>& nums) {
    	
// 	bubbleSort(nums,nums.size());
	
// 	return nums;

//     }
// };


// 2.OPtimal way



class Solution {
public:
	
	    vector<int> bubbleSort(vector<int>& nums, int n) {
    	
        bool isSwap = false;    	
    	
        if(n <=1){
    		return nums;
		}
		
		for(int i = 0 ; i < n-1 ; i++){
			
			if(nums[i]>nums[i+1]){
				swap(nums[i],nums[i+1]);
                isSwap = true;
			}
		}

		n--;
		bubbleSort(nums,n);
        
        if(!isSwap){
            return nums;
        }
    	
    	return nums;

    }
	
	
    vector<int> bubbleSort(vector<int>& nums) {
    	
	bubbleSort(nums,nums.size());
	
	return nums;

    }
};

int main() {

    Solution s;
    
    vector<int> nums = { 1 , 8 ,2 , 4};

    s.bubbleSort(nums);
    
    for(int i : nums ){
    	cout<<i;
	}

}
