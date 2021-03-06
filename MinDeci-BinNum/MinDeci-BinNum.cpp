//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3756/
#include<iostream>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int min = 0;
        for(const auto &ch : n) {
            min = ch-'0' > min ? ch-'0' : min;
        }
        return min;
        /*
        int l = n.length();
        int max = -1;
        for(i = 0;i<l;i++) {
            if(n[i]-'0' > max) {
                max = n[i]-'0';
            }
        }
        return max;
        */
    }
};
