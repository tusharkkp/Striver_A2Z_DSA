class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
    	int n = nums.size();
    	vector<pair<int,int>>numswithidx;
		
		int s = 0; int e = n - 1;
		
		for(int i = 0 ; i < n ; i++){
			numswithidx.push_back({nums[i] , i});
		}
		sort(numswithidx.begin() , numswithidx.end());
		
		while(s < e){
			int sum = numswithidx[s].first + numswithidx[e].first;
			
			if(sum == target){
				return {numswithidx[s].second , numswithidx[e].second};
			}
			
			if(sum > target){
				e--;
			}
			else{
				s++;
			}
			
		}
		return {-1,-1};
    }

};