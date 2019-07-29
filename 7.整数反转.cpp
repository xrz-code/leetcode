/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        if(x <= (0-pow(2,31)) || x >= (pow(2,31)-1))
            return 0;
        while(x!=0){
            int var = x % 10;
            x = x / 10;
            if(rev <= (0-pow(2,31)/10) || rev >= (pow(2,31)-1)/10)
                return 0;
            rev = rev*10 + var;
        }
        return rev;
    }
};

