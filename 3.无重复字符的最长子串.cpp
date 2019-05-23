/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子�?
 */
//#include <stdio.h>
//#include <string>

using namespace std;
class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
        int m[256] = {0}, res = 0, left = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (m[s[i]] == 0 || m[s[i]] < left) {
                res = max(res, i - left + 1);
            } else {
                left = m[s[i]];
            }
            m[s[i]] = i + 1;
        }
        return res;
    }
};
/*
int main()
{
    Solution *A = new Solution();
    string s("bbbbb");
    int res = A->lengthOfLongestSubstring(s);
    printf("res = %d",res);
    delete A;
}
*/
