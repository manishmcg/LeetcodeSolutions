//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3754/

class Solution {
public:
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
    }
};