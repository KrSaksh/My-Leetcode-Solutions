class Solution 
{
    public:
    bool isPalindrome(int x) 
    {
        int org = x;

        if((x < 0 || x % 10 == 0) && x != 0)
        {
            return false;
        }
        int rev = 0;
        while(x)
        {
            if(rev <= INT_MAX/10)
            {
                rev *= 10;
            }
            rev += x % 10;
            x /= 10;
        }
        
        return (rev == org);
    }
};