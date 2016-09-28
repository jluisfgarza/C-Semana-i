class Solution {
public:
  string removeKdigits(string num, int k) {
        string str;
        int n = num.size(), keep = n - k;
        for (char c : num) {
          // k is a number other than 0
            while (k > 0 && !str.empty() && str.back() > c)
            {
              //delete last char from string
                str.pop_back();
                --k;
            }
            // Append char c to the and of the string
            str.push_back(c);
        }
        // If increasingly sorted, delete last.
        str.resize(str.length() - k);      // zeros
        //erase left zeros
        while (!str.empty() && str[0] == '0')
          str.erase(str.begin());
        return str.empty() || str == "0" ? "0" : str;
    }
};
