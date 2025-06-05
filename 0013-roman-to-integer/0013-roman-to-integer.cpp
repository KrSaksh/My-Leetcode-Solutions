class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        bool fi = false;
        bool fx = false;
        bool fc = false;

        // unordered_map<char, int> m;
        // m.insert({'I', 1});
        // m.insert({'V', 5});
        // m.insert({'X', 10});
        // m.insert({'L', 50});
        // m.insert({'C', 100});
        // m.insert({'D', 500});
        // m.insert({'M', 1000});

        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] == 'I')
            {
                if(fi == false)
                    ans += 1;
                else if(fi == true)
                    ans -= 1;
            }    
            else if(s[i] == 'V')
            {
                fi = true;
                ans += 5;
            }   
            else if(s[i] == 'X')
            {
                fi = true;
                if(fx == false)
                    ans += 10;
                if(fx == true)
                    ans -= 10;
            }
            else if(s[i] == 'L')
            {
                fi = true;
                fx = true;
                ans += 50;
            }
            else if(s[i] == 'C')
            {
                fi = true;
                fx = true;
                if(fc == false)
                    ans += 100;
                if(fc == true)
                    ans -= 100;
            }
            else if(s[i] == 'D')
            {
                fi = true;
                fx = true;
                fc = true;
                ans += 500;
            }
            else if(s[i] == 'M')
            {
                fi = true;
                fx = true;
                fc = true;
                ans += 1000;
            }
        }
        return ans;
    }
};