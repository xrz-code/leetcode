/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */
/* 
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
*/
class Solution {
public:
    int myAtoi(string str) {
        int i;
        int flag = 0;
        int res = 0;
        if(str.size() == 0)
            return res;
        str.erase(0,str.find_first_not_of(" "));
        for(i = 0; i < str.size(); i++){
            if(i == 0 && (str[i] == '-')){
                flag = 1;
                continue;
            }
            if(i == 0 && (str[i] == '+')){
                continue;
            }

            if(str[i] < 48 || str[i] > 57)
                break;
            if(res > (pow(2,31) - 1 - str[i] + 48)/10.0)
            {
                if (flag == 1)
                    res = -pow(2,31);
                else
                    res = pow(2,31);
                return res;
            }
            res = res*10 + (str[i] - 48);
        }
        if (flag == 1){
            res = ~res + 1;
        }
        return res;
    }

};
/* 
int main()
{
    Solution A;
    A.myAtoi("-91283472332");
    return 0;
}
*/
