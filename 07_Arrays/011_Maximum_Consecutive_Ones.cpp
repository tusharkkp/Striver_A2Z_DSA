
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++){
    	
        int cnt = 0;
//        cout<<"*"<<i<<"*"<<endl;
        while ( nums[i] == 1){
            cnt++;
//        	cout<<"&"<<i<<"&"<<endl;
		    i++;
        }
        
        ans = max(ans, cnt); //5
    }
    
    return ans;
}
};

int main() {

    Solution s;

	vector<int> nums = {1,1,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,1,1};
	
	s.findMaxConsecutiveOnes(nums);
}
