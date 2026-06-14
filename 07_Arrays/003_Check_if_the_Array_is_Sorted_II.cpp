#include <bits/stdc++.h>

using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            bool istru = false;
            int c = 0 ;
            for(int i = 1  ; i <= nums.size() ; i++){

                if(nums[i]>nums[i-1]){
                    c++;
                }
            }
            if(++c == nums.size()){
                istru = true;
            }
            return istru;
		}
};

int main() {

    Solution s;

    s.name();

}
