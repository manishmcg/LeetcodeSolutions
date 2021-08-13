#include<iostream>
using namespace std;

class Solution {
private:
    char toLowerCase(char ch)  {
        if(ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A' ;
        return ch;
    }
public:
    string toLowerCase(string s) {
        for(auto &ch : s) {
            ch = toLowerCase(ch);
        }
        return s;
    }
    
    /*
    string toLowerCase(string s) {
        string ret_s = "";
        int len = s.length();
        int i = 0;
        while(i<len) {
            ret_s += ((s[i]-'A') >= 0  && (s[i]-'A') < 26 ) ?
               (s[i] + 32) :  s[i] ;
            i++;
        }
        return ret_s;
    }*/
};
