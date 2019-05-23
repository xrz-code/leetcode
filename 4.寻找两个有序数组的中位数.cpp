/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个有序数组的中位数
 */
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <iostream>
//using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();
        while(it1 != nums1.end() && it2 != nums2.end())
        {
            if (*it1 > *it2)
            {
                result.push_back(*it2);
                it2++;
            } 
            else if(*it1 < *it2)
            {
                result.push_back(*it1);
                it1++;
            }
            else
            {
                result.push_back(*it1);
                result.push_back(*it2);
                it1++;
                it2++;
            }    
        }
        if(it1 != nums1.end())
        {
            while(it1 != nums1.end())
            {
                result.push_back(*it1);
                it1++;
            }
        }
        else if(it2 != nums2.end())
        {
            while(it2 != nums2.end())
            {
                result.push_back(*it2);
                it2++;
            }
        }
        int len = result.size()/2;
        double res;
        if (2*len == result.size())
        {
            res = (result[len] + result[len-1])/2.0;
        }
        else
        {
            res = result[len];
        }
        //cout<< fixed << res<<endl;
        //for(it1 = result.begin();it1!=result.end();it1++)
        //{
        //    cout<<(*it1) ;
        //}
        return res;
    }
};
/*
int main()
{
    Solution *A = new Solution;
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(4);
    nums1.push_back(6);
    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(7);
    nums2.push_back(8);
    double k = A->findMedianSortedArrays(nums1,nums2);
}
*/
