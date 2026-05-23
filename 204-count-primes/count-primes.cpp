class Solution {
public:
    int countPrimes(int n) {
       

        if (n <= 2) return 0;

        // Step 1: assume all numbers are prime
        vector<bool> isPrime(n, true);

        isPrime[0] = isPrime[1] = false;   // 0 and 1 are not prime

        // Step 2: sieve
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                // mark all multiples of i as not prime
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 3: count primes
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i])
                count++;
        }

        return count;
    }
};
        
