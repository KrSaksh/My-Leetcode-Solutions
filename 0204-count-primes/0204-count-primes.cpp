class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n + 1, true);
        for(long long i = 2; i * i < n; i++)
        {
            if(prime[i])
            {
                for(long long j = i * i; j <= n; j += i) 
                {
                    prime[j] = false;
                }
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++) 
        {
            count += prime[i];
        }
        return count;
    }
};