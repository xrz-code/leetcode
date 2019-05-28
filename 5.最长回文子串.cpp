/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子�?
 */
/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
*/
class Solution {
public:
    Solution(){
        maxlen = 0;
        resault = "";
        maxresault = "";
    }
    string longestPalindrome(string s) {
        int i;
        for(i=0;i<s.size()-1;i++)
        {
            findlongest(s,i,i);
            findlongest(s,i,i+1);
        }
        return maxresault;
    }
    void findlongest(string s,int begin,int end){
        while(begin >= 0 && end - begin < s.size())
        {
            if (s[begin] == s[end])
            {
                resault = s.substr(begin,end - begin + 1);
                begin--;
                end++;
            }
            else
            {
                break;
            }   
        }
        if(maxresault.size() <= resault.size())
        {
            maxresault = resault;
        }
        resault = "";
    }
private:
    int maxlen;
    string resault;
    string maxresault;
};
/*
int main(int args,char* argv[])
{
    Solution *A = new Solution;
    string s("\'\"\"\'");
    string res;
    res = A->longestPalindrome(s);
    cout<<"res = "<<res;
    return 0;
}
*/
