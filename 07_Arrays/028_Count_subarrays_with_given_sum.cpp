//Brut 

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0;

        for(int start = 0 ; start < n ; start++){

            for(int end = start ; end < n ; end++){
                int sum = 0;
                for(int i = start ; i <= end ; i++){
                    sum = sum + nums[i];
                }
                if (sum == k){
                    c++;
                }
            }
        }
        return c;
    }
};


//O[N*N]

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0;

        for(int start = 0 ; start < n ; start++){
            int sum = 0;
            for(int end = start ; end < n ; end++){

                sum = sum + nums[end];
                
                if (sum == k){
                    c++;
                }
            }
        }
        return c;
    }
};


//OPTIMALLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL

class Solution {
public:
    // Function to find count of subarrays with sum equal to k using prefix sums and hashmap
    int subarraySum(vector<int>& arr, int k) {
        // Size of the array
        int n = arr.size();

        // Map to store frequency of prefix sums
        unordered_map<int, int> prefixSumCount;

        // Initialize prefix sum and count of subarrays
        int prefixSum = 0;
        int count = 0;

        // Base case: prefix sum 0 has occurred once
        prefixSumCount[0] = 1;

        // Traverse through the array
        for (int i = 0; i < n; i++) {
            // Add current element to prefix sum
            prefixSum += arr[i];

            // Calculate the prefix sum that needs to be removed
            int remove = prefixSum - k;

            // If this prefix sum has been seen before,
            // add its count to the result
            if (prefixSumCount.find(remove) != prefixSumCount.end()) {
                count += prefixSumCount[remove];
            }

            // Update the frequency of the current prefix sum
            prefixSumCount[prefixSum]++;
        }

        // Return the total count of subarrays
        return count;
    }
};




