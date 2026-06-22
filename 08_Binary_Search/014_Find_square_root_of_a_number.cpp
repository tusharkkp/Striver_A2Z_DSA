/*
QUESTION:
Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

Example:

Input:
x = 5
Output: 2
Explanation: Since 5 is not a perfect square, the floor of the square root of 5 is 2.

Input:
x = 4
Output: 2
Explanation: Since 4 is a perfect square, the square root of 4 is 2.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	long long int floorSqrt(long long int x){
		int s= 0;
		int e = x ; // not x -1
		
		while(s <= e){
			int mid = s + (e - s) / 2 ;
			
			if(mid * mid == x){
				cout<<mid;
				return mid;
			}
			else if(mid*mid > x){
				// mid sq is gt than x
				e = mid - 1 ;
			}
			else{
				s = mid + 1;
			}
		}
	
		return floor(sqrt(x));
		
	}

long long int floorSqrt2(long long int x) 
{
    long long int low = 1, high = x;
    long long int ans = -1;
    while(low <= high){
        long long int mid = low + (high - low) / 2;
        if(x == mid * mid)
            return mid;
        else if(mid * mid < x){
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

};

int main() {

    Solution s;

    cout<<s.floorSqrt(5);

}
