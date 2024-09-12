class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> counts;
        int count = 0;
        bool flag = 0;
        for(int i = 0; i < allowed.size(); i++)
        {
            counts[allowed[i]]++;
        }
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].size(); j++)
            {
                if(counts[words[i][j]] == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                count++;
            }
            flag = 0;
        }
        return count;
    }
};