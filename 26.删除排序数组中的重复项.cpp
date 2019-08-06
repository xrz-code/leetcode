/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        if(nums.size() == 0)
            return 0;
        for(i = 0; i < nums.size() -1;){
            if(nums[i] == nums[i+1]){
                vector<int>::iterator it = find(nums.begin(), nums.end(), nums[i+1]);
                nums.erase(it);
            }
            else
            {
                i++;
            }
            
        }
        return nums.size();
    }
};

