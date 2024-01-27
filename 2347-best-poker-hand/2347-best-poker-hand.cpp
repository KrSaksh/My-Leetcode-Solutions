class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {
        vector<int> r(14);
        vector<int> s(5);
        bool flush = 0, three = 0, pair = 0, high = 0;
        for(int i = 0; i < 5; i++)
        {
            if(ranks[i] == 1)
            {
                r[1]++;
            }
            if(ranks[i] == 2)
            {
                r[2]++;
            }
            if(ranks[i] == 3)
            {
                r[3]++;
            }
            if(ranks[i] == 4)
            {
                r[4]++;
            }
            if(ranks[i] == 5)
            {
                r[5]++;
            }
            if(ranks[i] == 6)
            {
                r[6]++;
            }
            if(ranks[i] == 7)
            {
                r[7]++;
            }
            if(ranks[i] == 8)
            {
                r[8]++;
            }
            if(ranks[i] == 9)
            {
                r[9]++;
            }
            if(ranks[i] == 10)
            {
                r[10]++;
            }
            if(ranks[i] == 11)
            {
                r[11]++;
            }
            if(ranks[i] == 12)
            {
                r[12]++;
            }
            if(ranks[i] == 13)
            {
                r[13]++;
            }
            if(suits[i] == 'a')
            {
                s[1]++;
            }
            if(suits[i] == 'b')
            {
                s[2]++;
            }
            if(suits[i] == 'c')
            {
                s[3]++;
            }
            if(suits[i] == 'd')
            {
                s[4]++;
            }
        }
        for(int i = 1; i < 5; i++)
        {
            if(s[i] == 5)
            {
                flush = 1;
            }
        }
        for(int i = 1; i < 14; i++)
        {
            if(r[i] >= 3)
            {
                three = 1;
            }
            else if(r[i] == 2)
            {
                pair = 1;
            }
            else
            {
                high = 1;
            }
        }
        if(flush)
        {
            return "Flush";
        }
        if(three)
        {
            return "Three of a Kind";
        }
        if(pair)
        {
            return "Pair";
        }
        if(high)
        {
            return "High Card";
        }
        return "High Card";
    }
};