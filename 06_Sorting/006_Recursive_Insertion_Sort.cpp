#include <bits/stdc++.h>

using namespace std;

class Solution {
public:	
    vector<int> insertionSort(vector<int>& nums) {
		insertion_sort(nums, 0, nums.size());
		return nums;
    }	
    
    void insertion_sort(vector<int>& nums, int i, int n) {

    if (i == n) return ;

    int j = i;

    while (j > 0 && nums[j - 1] > nums[j]) {
        
        swap(nums[j-1],nums[j]);
        
		j--;
    }

    insertion_sort(nums, i + 1, n);
}
};

int main() {

    Solution s;
    
    vector<int> nums = { 1 , 3,999,8 ,2 , 4};

    s.insertionSort(nums);
    
    for(int i : nums ){
    	cout<<i<<endl;
	}

}
