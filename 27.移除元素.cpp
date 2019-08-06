/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j = 0,k;
        for(i = 0; i < nums.size() - j;){
            if(nums[i] == val){
                k = nums.size() - j - 1;
                nums[i] = nums[i] ^ nums[k];
                nums[k] = nums[i] ^ nums[k];
                nums[i] = nums[i] ^ nums[k];
                j = j + 1;
            }
            else
                i++;
        }
        return nums.size() - j;
    }
};

