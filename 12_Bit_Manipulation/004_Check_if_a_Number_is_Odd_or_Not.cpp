class Solution {
public:
    bool isOdd(int n) {
        // Your code goes here
        if(n & 1){
            return true;
        }
        return false;
    }
};