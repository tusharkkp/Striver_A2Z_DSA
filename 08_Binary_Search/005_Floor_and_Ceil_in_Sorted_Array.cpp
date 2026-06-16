#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1; // index of ceil

        // Find ceil (first element >= x)
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] >= x) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        vector<int> temp;

        // No ceil exists
        if (ans == -1) {
            temp.push_back(nums.back()); // floor
            temp.push_back(-1);          // ceil
            return temp;
        }

        // Exact match
        if (nums[ans] == x) {
            temp.push_back(x);
            temp.push_back(x);
            return temp;
        }

        // Ceil found but x not present
        int ceil = nums[ans];
        int floor = (ans == 0) ? -1 : nums[ans - 1];

        temp.push_back(floor);
        temp.push_back(ceil);

        return temp;
    }
};


class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int start = 0 ;
        int n  = nums.size();
        int end = n - 1;
        int ans = -1;

        while(start <= end ){

            int mid = start + (end - start) / 2;

            if(nums[mid] >= x){
                ans = mid;
                end = mid - 1;

            }
            else{
                start = mid + 1;
            }
        }
        vector<int> temp;
        
        if(x == nums[ans]){
            temp.push_back(nums[ans]);
            temp.push_back(nums[ans]);
        }

        else{
        temp.push_back(nums[ans-1]);
        temp.push_back(nums[ans]);
		}
		return temp;
    }
};


int main() {

    Solution s;

    s.name();

}
