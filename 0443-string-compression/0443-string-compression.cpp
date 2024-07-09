class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int n = chars.size();
        int ans = 0;
        int i = 0;
        while (i < n) 
        {
            int x = i + 1;
            while (x < n && chars[i] == chars[x]) 
            {
                x++;
            }
            chars[ans++] = chars[i];
            if (x - i > 1) 
            {
                string cx = to_string(x - i);
                for (char i : cx) 
                {
                    chars[ans++] = i;
                }
            }
            i = x;
        }
        return ans;
    }
};