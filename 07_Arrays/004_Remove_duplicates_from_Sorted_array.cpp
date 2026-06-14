#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0 ;
        for(int i = 1 ; i < nums.size() ; i++){

            if(nums[i-1] == nums[i]){
                for(int j = i ; j < nums.size() - 1 ; j++){
                    swap(nums[j], nums[j+1]);
                }
                nums.pop_back();
                i--;
                c++;
            }

        }
        return nums.size();
    }
};

int main() {

    Solution s;
    
    vector<int > nums ={1,2,2,2,2,2,2,2,3,3,3,4};

    	cout<<"cnt"<<s.removeDuplicates(nums)<<endl;

    
    for(int i : nums){
    	cout << i <<endl;
	}
	


}
