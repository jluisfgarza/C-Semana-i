/**
Repeated DNA Sequences
All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for
example: "ACGAATTCCG". When studying DNA, it is sometimes useful to
identify repeated sequences within the DNA.
Write a function to find all the 10-letter-long sequences (substrings) that occur
more than once in a DNA molecule.
For example,
Given s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",
Return: ["AAAAACCCCC", "CCCCCAAAAA"].
**/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        vector<string> result;
        if(s.length() < 10)
          return result;

        for(int i = 0; i <= s.length()-10; i++){
            string temp = s.substr(i,10);
            if(mp.find(temp) == mp.end()) {
                mp[temp] = 1;
            }
            else mp[temp]++;
        }
        for(auto k:mp){
            if(k.second>1) result.push_back(k.first);
        }
        return result;
    }
};
