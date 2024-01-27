class Solution {
public:
    int func(vector<string>& garbage, vector<int>& travel, int& metal, int& paper, int& glass) {
        int ig = 0;
        int im = 0;
        int ip = 0;
        int glength = garbage.size();
        int tlength = glength - 1;
        int total = 0;
        bool fg = 0;
        bool fp = 0; 
        bool fm = 0;
        for (int i = glength - 1; i >= 0; i--) 
        {
            for (int j = 0; j < garbage[i].size(); j++) 
            {
                if(garbage[i][j] == 'G')
                {
                    glass++;
                    if(!fg)
                    {
                        ig = i;
                        fg = 1;
                    }
                }
                if(garbage[i][j] == 'M')
                {
                    metal++;
                    if(!fm)
                    {
                        im = i;
                        fm = 1;
                    }
                }
                if(garbage[i][j] == 'P')
                {
                    paper++;
                    if(!fp)
                    {
                        ip = i;
                        fp = 1;
                    }
                }
            }
        }
        cout << ip << endl;
        cout << ig << endl;
        cout << im << endl;
        for(int x = 0; x < ip; x++)
        {
            paper += travel[x];
        }
        for(int x = 0; x < ig; x++)
        {
            glass += travel[x];
        }
        for(int x = 0; x < im; x++)
        {
            metal += travel[x];
        }
        cout << "Paper : " << paper << endl;
        cout << "Metal : " << metal << endl;
        cout << "Glass : " << glass << endl;
        total = paper + metal + glass;
        return total;
    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int metal = 0;
        int paper = 0;
        int glass = 0;
        return func(garbage, travel, metal, paper, glass);
    }
};