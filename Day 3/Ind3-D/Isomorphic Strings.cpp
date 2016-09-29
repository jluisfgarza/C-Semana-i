/**
Isomorphic Strings

Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while
preserving the order of characters. No two characters may map to the same
character but a character may map to itself.

For example,
Given "egg", "add", return true.
Given "foo", "bar", return false.
Given "paper", "title", return true.

Note:
You may assume both s and t have the same length

**/

class Solution {
public:

    bool isIsomorphic(string s, string t) {
      //asccii tables
      int cs[128] = {0};
      int ct[128] = {0};
      int n = s.size();

      for(int i = 0; i < n; i++)
      {
        if (cs[s[i]] != ct[t[i]])
          return false;
          
        else if (!cs[s[i]]) //only record once
        {
            cs[s[i]] = i+1;
            ct[t[i]] = i+1;
        }
      }
      return true;
    }

};
