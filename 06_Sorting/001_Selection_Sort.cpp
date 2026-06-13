#include <bits/stdc++.h>

using namespace std;

//nums[i] <= 10 pow 4... this means tht O(n logn ) or O(n*n) is acceptable

// selectionSort

// arr === [sorted part | Unsorted part]

// frm unsorted part we take smallest element and swap to sorted

//TC = n^2

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){

            int minele = i;

            for(int j = i +1 ; j < n ; j++){
                if(nums[j] < nums[minele]){
                    minele = j;
                }

            }
			swap(nums[i],nums[minele]);

        }

        return nums;
    }
};


int main() {

    Solution s;
	vector<int> nums = {1,3,15,6,2};
    s.selectionSort(nums);
	int n  = nums.size();
for(int i : nums){
	cout<<i<<endl;
}

}
