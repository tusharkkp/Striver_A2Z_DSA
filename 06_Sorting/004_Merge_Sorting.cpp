#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> mergeSort(vector<int>& nums , int si , int ei) {
    	
//    	D & C
//    	Recurssion
    	
    	int n = nums.size();
    	
    	if( si >= ei ){
    		// size == 0 || 1 and si > ei
    		return nums;
		}
		
		int mid = si + (ei - si) / 2;
		
		mergeSort(nums , si , mid); // left
		
		mergeSort(nums , mid+1 , ei); // right
		
		merge(nums,si,ei,mid );
		
		return nums;
		
    }
    
    
    void merge(vector<int>& nums , int si , int ei, int mid ){
    	
    	vector<int> temp;
    	int left = si;
    	int right = mid + 1;
    	
    	while(left <= mid && right <= ei){
    		
    		if(nums[left] >= nums[right]){
    			temp.push_back(nums[right]);
    			right++;
			}
			
			else{
				temp.push_back(nums[left]);
				left++;
			}
    		
		}
		
		while(left <= mid){
			temp.push_back(nums[left]);
			left++;
		}
		
		while(right <= ei){
			temp.push_back(nums[right]);
			right++;
		}
		
		for(int i = si ; i <= ei ; i++){
			nums[i] = temp[i - si]; 
		}
    	
	}
};


int main() {

    Solution s;
    
    vector<int> nums = {6,3,1,8,4};

	
    s.mergeSort(nums,0 , 4);
	
	for(int i : nums){
		cout<<i;
	}
}
