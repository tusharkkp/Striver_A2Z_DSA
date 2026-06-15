
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	//O(N).........1st way
	
	vector<int> rotateArray(vector<int> &arr, int n){
		arr[n] = arr[0];
		
		for(int i = 1 ; i <= n ; i++){
		swap(arr[i],arr[i-1]);
		}
		return arr;
		
	}
	
	
	//O(n).....2nd way
	
//	vector<int> rotateArray(vector<int> &arr, int n)
//{
//    int temp = arr[0];
//    for (int i = 0; i < n - 1; i++)
//    {
//        arr[i] = arr[i + 1];
//    }
//    arr[n - 1] = temp;
//
//    return arr;
//}

};

int main() {

    Solution s;
    
    vector<int > nums ={1,2,3,4};

    s.rotateArray(nums,nums.size());

    
    for(int i : nums){
    	cout << i <<endl;
	}
	

}
