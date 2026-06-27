#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
		int end = n;
		string ans;
				
		for(int i = n-1 ; i >= 0 ; i--){
			
			if(s[i] == ' '){
				
				ans += s.substr(i+1 , n - i - 1 );
				ans += " ";
				end = i;
			}
		}
		ans += s.substr(0, end);
        return ans;
    }
};

int main() {

    Solution s;
	string d = "tushar is boy";
	
    s.reverseWords(d);

}
