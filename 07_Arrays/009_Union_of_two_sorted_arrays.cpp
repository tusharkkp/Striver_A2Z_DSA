#include <bits/stdc++.h>

using namespace std;

//same as that of merge fn from Msort

class Solution {
public:
	
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        
        int l = 0;
        int r = 0;

        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> UA;
        
        while(l < n1 && r < n2){
		
        
        if(nums1[l] < nums2[r]){
        	if(UA.empty() || UA.back() != nums1[l]){
                UA.push_back(nums1[l]);

			}
            l++        	;

        }

        if(nums1[l] > nums2[r]){
        	if(UA.empty() || UA.back() != nums2[r]){
        		UA.push_back(nums2[r]);
            	
			}
            r++;
        }

        if(nums1[l] == nums2[r]){
        
        	if(UA.empty() || UA.back() != nums2[r]){
			
            UA.push_back(nums2[r]);
        	}
            l++;r++;
        }
        
    }
    
    while(l<n1){
    	    if(UA.empty() || UA.back() != nums1[l]){
            UA.push_back(nums1[l]);
            
        }
        l++;
	}
	
    while(r<n2){
    	    if(UA.empty() || UA.back() != nums2[r]){
            UA.push_back(nums2[r]);
            
        }
        r++;
	}
    
    return UA;

    }
};
int main() {

    Solution s;

    s.name();

}
