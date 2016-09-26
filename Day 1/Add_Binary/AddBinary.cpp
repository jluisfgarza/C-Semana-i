/**
Add Binary

Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100".
**/

class Solution {
public:
    string addBinary(string a, string b) {
        string sum = a.size()>b.size()?a:b;
        string s = a.size()>b.size()?b:a;
        bool carry=false;
        int i = s.size()-1;
        int j = sum.size()-1;

        while (i >= 0){
            if (sum[j] == '1' && s[i] == '1')
            {
              sum[j] = carry ? '1' : '0';
              carry = true;
              i--; j--;
            }
            if (sum[j] == '0' && s[i] == '0')
            {
              sum[j] = carry ? '1' : '0';
              carry = false;
              i--; j--;
            }
            if (sum[j] == '0' && s[i] == '1')
            {
              sum[j] = carry ? '0' : '1';
              i--; j--;
            }
            if (sum[j] == '1' && s[i] == '0')
            {
              sum[j] = carry ? '0' : '1';
              i--; j--;
            }
        }
        while (j>=0 && carry){
            if (sum[j] == '1')
            {
              sum[j] = '0';
              j--; continue;
            }
            if (sum[j] == '0')
            {
              sum[j] = '1';
              break;
            }
        }
        if (j < 0 && carry){ sum = "1" + sum;}
        return sum;
    }
};
