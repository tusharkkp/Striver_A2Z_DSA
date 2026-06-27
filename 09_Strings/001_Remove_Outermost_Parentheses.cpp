#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        
        if(n==0){
            return s;
        }
            bool b = true;

        for(int i = 0 ; i<n ; i++){

            if(s[i] == '(' && s[i+1] == ')'){
                i++;
                continue;
            }

            if(s[i] == ')'){
                s[i] = 'A';
                b = true;
            }

            if(s[i] == '(' && b){
                s[i] = 'A';
                b = false;
            }
        }

        for(int j = 0 ; j < n ; j++){
            if(s[j] == 'A'){
                s.erase(j,1);
                n--;j--;
            }
        }

        return s+')';
    }
};

int main() {

    Solution s;

    cout<<s.removeOuterParentheses("(()())(())(()(()))");

}
