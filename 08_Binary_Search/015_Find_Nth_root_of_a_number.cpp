/*
QUESTION:
You are given 2 numbers (n, m); the task is to find n√m (nth root of m).

Example:

Input: n = 2, m = 9
Output: 3
Explanation: 3^2 = 9

Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not an integer.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int NthRoot(int n, int m) {
	int s = 0 ;
	int e = m ;
	int ans = -1 ;
	
	while(s <= e){
		
		int mid = s + (e - s) / 2 ;
		
		if(pow(mid,n) == m){
			return mid;
		}
		
		else if(pow(mid,n) > m){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		
	}
	return ans;
	}


};

int main() {

    Solution s;

    cout<<s.NthRoot(3,9);

}
