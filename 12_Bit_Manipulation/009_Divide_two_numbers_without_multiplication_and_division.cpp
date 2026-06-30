class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == divisor){return 1;}
        if(divisor == 1){return dividend;}
        if(dividend == INT_MIN && divisor == -1){return INT_MAX;}

        bool ispos = true;

        if(dividend > 0 && divisor < 0){ispos = false;}
        if(dividend < 0 && divisor > 0 ){ispos = false;}

        long long n = dividend;
        long long d = divisor;

        n= abs(n);
        d = abs(d);

        long long sum = 0 , ans = 0 ;

        while(sum+d <= n){
            ans++;
            sum+=d;

        }

        if(ans> INT_MAX && ispos){
            return INT_MAX;
        }
        if(ans>INT_MAX && !ispos){
            return INT_MIN;
        }

        return ispos ? ans : -1*ans;
    }
};