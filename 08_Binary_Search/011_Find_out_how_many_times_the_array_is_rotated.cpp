/*
QUESTION:
Given an ascending sorted rotated array Arr of distinct integers of size N. 
The array is right rotated K times. Find the value of K.

Example 1:

Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int findKRotation(int arr[], int n) {
		int s = 0 ; int e = n - 1;
		int c = 0 ;

		while(s <= e){

		int mid = s + (s - e) / 2 ;			
			if(arr[s] > arr[mid]){
				c++;
				s++;
				e--;
			}
			else{
				while(arr[mid]<arr[mid+1]){
					mid++;
				}
				return mid + 1;	
			}
	
	}
	return c -1;
	}

};

int main() {

    Solution s;
    int arr[] = {3,4,5,6,7,1,2};

    cout<<s.findKRotation(arr , 7);

}
