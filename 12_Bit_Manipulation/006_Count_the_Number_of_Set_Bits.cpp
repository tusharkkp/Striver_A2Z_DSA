class Solution {
public:
    int countSetBits(int n) {
        // Your code goes here
        int c = 0 ;
        while(n!=0){
if(n & 1){            c++;}
            n=n>>1;
        }
        return c;

    }
};