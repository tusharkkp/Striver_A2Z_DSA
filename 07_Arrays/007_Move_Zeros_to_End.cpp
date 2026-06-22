#include <bits/stdc++.h>

using namespace std;

/*
APPROACH:-
-> The idea is while traversing the array if we found any zero 
then we have to swap it with next non-zero
*/


//1. O(n square)................

//class Solution{
//public:
//vector<int> movee(vector<int>& nums){
//	
//	int n  = nums.size();
//	
//	for(int i = 0 ; i < n ; i++){
//		
//		if(nums[i] == 0){
//			
//			for(int temp = i + 1 ; temp < n ; temp++){
//			
//				if(nums[temp] != 0){
//					swap(nums[i], nums[temp]);
//					break;
//				}
//			}
//		}
//	}
//	return nums;
//}
//
//};


//2. O(N) ............... Optimal wayyyyyyyyyyyyyyyyyyyyy


//class Solution {
//public:
//    vector<int> movee(vector<int>& nums) {
//        int j = 0; // position for next non-zero
//        
//        for(int i = 0; i < nums.size(); i++) {
//            if(nums[i] != 0) {
//                swap(nums[i], nums[j]);
//                j++;
//            }
//        }
//        return nums;
//    }
//};



class Solution{

public:

int next_nonzero(vector<int> &a, int &j)
{
    while (j < a.size())
    {
        if (a[j] != 0)
            return j;
        j++;
    }
    return -1;
}
void movee(vector<int> &nums)
{
    int j = -1; // is to find the next non zero element
    // i signifies that upto here all elements are non-zero
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
            continue;
        if (j == -1)
            j = i + 1;
        int nxt_non0 = next_nonzero(nums, j);
        if (nxt_non0 == -1)
            return;
        swap(nums[i], nums[nxt_non0]);
    }
}

};
int main() {

    Solution s;

	vector<int> nums = {2,0,1,3,0,8,0,0,0};
	
	s.movee(nums);
	
	for(int i : nums ){cout<<i;
	}
	
}
