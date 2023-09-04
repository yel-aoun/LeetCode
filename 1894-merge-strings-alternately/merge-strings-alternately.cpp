class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string str;
        int i = 0;
        for(; i < word1.size(); i++)
        {
            str += word1[i];
            if (i < word2.size())
                str += word2[i];
        }
        if (word2.size() > word1.size())
            str += &word2[i];
        return str;
    }
};