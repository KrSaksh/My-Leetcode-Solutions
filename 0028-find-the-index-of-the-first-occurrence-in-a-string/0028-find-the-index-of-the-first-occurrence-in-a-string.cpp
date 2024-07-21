class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int i = 0;
        int j = n - 1;
        int ans = -1;
        while(i <= j)
        {
            if(haystack[i] == needle[0]) // h[6] == n[0]
            {
                ans = i; // 6
                int k = 0;
                while(k < needle.size())
                {
                    if(haystack[i] != needle[k])
                    {
                        k = 0;
                        i = ans;
                        break;
                    }
                    i++;
                    k++;
                }
                if(k == needle.size())
                {
                    return ans;
                }
            }
            i++;
        }
        return -1;
    }
};