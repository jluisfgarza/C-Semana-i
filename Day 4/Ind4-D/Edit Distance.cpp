/**
Edit Distance
Given two words word1 and word2, find the minimum number of steps required
to convert word1 to word2. (each operation is counted as 1 step.)
You have the following 3 operations permitted on a word:
a) Insert a character
b) Delete a character
c) Replace a character
**/
class Solution {
public:
    int minDistance(string word1, string word2) {
        int w1len = word1.length();
        int w2len = word2.length();
        int d[w1len + 1][w2len + 1];

        for(int i = 0; i < w1len + 1; i++)
            d[i][0] = i;
        for(int j = 0; j < w2len + 1; j++)
            d[0][j] = j;
        for(int i = 1; i < w1len + 1; i++)
        {
            for(int j = 1; j < w2len + 1; j++)
            {
                if(word1[i - 1] == word2[j - 1])
                    d[i][j] = min(min(d[i - 1][j - 1], d[i - 1][j] + 1), d[i][j - 1] + 1);
                else
                    d[i][j] = min(min(d[i - 1][j - 1], d[i - 1][j]), d[i][j - 1]) + 1;
            }
        }
        return d[w1len][ w2len];
    }
};
