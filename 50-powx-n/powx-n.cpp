class Solution {
public:
    double myPow(double x, int n) {
         double res = 1;
        long long b = n;
        if (n < 0) {
            b = abs(b);
            x = 1 / x;
        }
        
        while (b > 0) {
            if (b & 1) res *= x;
            x *= x;
            b /= 2;
        }
        return res;
        
    }
};