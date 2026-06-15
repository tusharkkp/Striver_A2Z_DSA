#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
		void leftRotate(int arr[], int n, int k){
		
		int temp = arr[0];
		for(int i = 1 ; i < n ; i++){
			
			swap(arr[i-1],arr[i]);
			
		}
		arr[n-1] = temp;
		k--;
		
		if(k){
			return leftRotate( arr,  n,  k);

		}
				for(int i = 0 ; i < n ; i++){
			cout<<arr[i]<<endl;
		}
	}
};


//2nd wayyyyyyyyyyyyyyyyyyyyyyyy OPTIMAL WAYYYYYYYYYYYYY

//class Solution{
//public:
//	
//		void leftRotate(int arr[], int n, int k){
//			
//			k = k%n; // k should not be greter that n
//			
//										//1234							
//			reverse(arr, arr+k);		//2134
//			reverse(arr+k , arr+n);		//2143
//			reverse(arr, arr+n);		//3412
//			
//		}
//		
//		void rightRotate(int arr[], int n, int k)
//{
//    k = k % n; // to keep k within the range
//    reverse(arr, arr + (n - k) );
//    reverse(arr + (n - k), arr + n);
//    reverse(arr, arr + n); 
//}
//
//
//};


int main() {

    Solution s;
    
//    int arr[];
//	arr = [1,2,3,4];
    int arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
//    arr[5] = 6;
//    arr[6] = 7;

    s.leftRotate(arr,5,2);
//        for (int i = 0; i < 5; ++i) {
//        cout << arr[i] << " ";
//    }
    cout << endl;
}
