/**
Word Pattern
Given a pattern and a string str, find if str follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in
pattern and a non-empty word in str.
Examples:
1. pattern = "abba", str = "dog cat cat dog" should return true.
2. pattern = "abba", str = "dog cat cat fish" should return false.
3. pattern = "aaaa", str = "dog cat cat dog" should return false.
4. pattern = "abba", str = "dog dog dog dog" should return false.
Notes:
You may assume pattern contains only lowercase letters, and str contains
lowercase letters separated by a single space.
**/

class Solution {
 public:
  bool wordPattern(string pattern, string str)
  {
   //Mapas
   map<char, int> pat;
   map<string, int> st;

   // Toma cada palabra separada del string
   istringstream istr (str);
   string tmp;
   int i = 0;

   //Para cada palabra
   while (istr >> tmp){
   //pattern menor
   if (i == pattern.length())
    return false;

   //mapa de frecuencias
   pat[pattern[i]]++;
   st[tmp]++;

   //revisar la frecuenciapara cada uno
   if (pat.find(pattern[i])->second != st.find(tmp)->second)
     return false;
     i++;
   }

   //pattern es mas largo
   if (i<pattern.size())
     return false;

    return true;
  }
 };
