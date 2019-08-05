/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */
/* 
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <vector>
using namespace std;
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0,j = n-1;
        int temp_area = 0,max_area = 0;
        while(i < j)
        { 
            if (height[i] < height[j])
            {
                temp_area = height[i] * (j - i);
                i++;
            }
            else
            {
                temp_area = height[j] * (j - i);
                j--;
            }
            max_area = max_area>temp_area?max_area:temp_area;
        }
        return max_area;
    }
};
/* 
int main()
{
    int a[] = {1,8,6,2,5,4,8,3,7};
    vector<int> height(a,a+9);
    Solution A;
    A.maxArea(height);
    return 0;
}

*/
