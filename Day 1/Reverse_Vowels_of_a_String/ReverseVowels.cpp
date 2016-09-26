/**
Reverse Vowels of a String

Write a function that takes a string as input and reverse only the vowels of a
string.

Example 1:
Given s = "hello", return "holle".
Example 2:
Given s = "leetcode", return "leotcede".
**/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

class Solution {
public:

  string reverseVowels(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        while (i < j && !isVowel(s[i])) {
            i ++;
        }
        while (i < j && !isVowel(s[j])) {
            j --;
        }
        swap(s[i++], s[j--]);
    }
    return s;
  }

  bool isVowel(char c) {
     return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
  }
};
