class Solution {
public:
    int countPrimes(int n) {
        // int count = 0;
        // if(n <= 2)
        // {
        //     return 0;
        // }
        vector<bool> prime(n + 1, true);
        // prime[0] = prime[1] = false;
        for(long long i = 2; i * i < n; i++)
        {
            if(prime[i])
            {
                // count++;
                cout << i << endl;
                for(long long j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }
        int ans = 0;
        for(int i = 2; i<n; i++) {
            ans += prime[i];
        }
        return ans;
        // return count;
    }
};