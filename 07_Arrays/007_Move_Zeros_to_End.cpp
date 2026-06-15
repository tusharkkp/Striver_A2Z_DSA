#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
vector<int> movee(vector<int> nums){
	
	int n = nums.size();
	
        for(int i = 1 ; i < nums.size() ; i++){

            if(nums[i-1] == 0){
                for(int j = i ; j < nums.size() - 1 ; j++){
                    swap(nums[j], nums[j+1]);
                }
                i--;

            }

        }
	return nums;
	
}



};

int main() {

    Solution s;

	vector<int> nums = {0,2,0,3,0,8,0};
	
	s.movee(nums);
	
	for(int i : nums ){cout<<i;
	}
	
}
