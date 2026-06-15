#include <bits/stdc++.h>

using namespace std;

//1..... O(N*N)......... Brut

//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//
//        for(int i = 1 ; i < nums.size() ; i++){
//
//            if(nums[i-1] == nums[i]){
//                for(int j = i ; j < nums.size() - 1 ; j++){
//                    swap(nums[j], nums[j+1]);
//                }
//                nums.pop_back();
//                i--;
//
//            }
//
//        }
//        return nums.size();
//    }
//};


//optimal sol O(N)
class Solution{
public:
int removeDuplicates(vector<int> &nums)
{
    int k = 0; // upto k array contains unique elements
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[k] != nums[j])
        {
            k++;
            swap(nums[k], nums[j]);
        }
    }
    return k + 1;
}
};


//using settttttttttttttttttt

// Solution class containing removeDuplicates method
class Solution {
public:
    // Removes duplicates using unordered_set and returns count of unique elements
    int removeDuplicates(vector<int>& nums) {
        // Unordered set to store elements we have already seen
        unordered_set<int> seen;

        // Index where the next unique element will be written
        int index = 0;

        // Loop over each element in the array
        for (int num : nums) {
            // If num is not in seen, it's unique
            if (seen.find(num) == seen.end()) {
                // Add this num to the set of seen numbers
                seen.insert(num);

                // Overwrite nums[index] with this unique num
                nums[index] = num;

                // Move index forward
                index++;
            }
        }
        // Return count of unique elements
        return index;
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
