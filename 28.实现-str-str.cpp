/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */
/*
#include <algorithm>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
using namespace std;
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
            return 0;
        if (needle.size() > haystack.size())
            return -1;
        for(int i = 0; i < haystack.size() - needle.size() + 1;i++){
            if(haystack.substr(i,needle.size()) == needle)
            return i;
        }
        return -1;
    }
};
/*
int main()
{
    string haystack("hello");
    string needle("ll");
    Solution A;
    A.strStr(haystack,needle);
    return 0;
}
*/
