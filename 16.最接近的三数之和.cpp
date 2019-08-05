/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res;
        sort(nums.begin(),nums.end());
        int i,j,k;
        int mini_diff = pow(2,31) - 1;
        int clostest_sum = 0;
        if (nums.size() < 3)
            return 0;
        for(i=0;i<nums.size()-2;i++)
        {
            j = i + 1;
            k = nums.size() - 1;
            while(j < k)
            {
                int temp_sum = nums[i] + nums[j] + nums[k];
                int temp_diff = target - temp_sum;
                if (temp_diff < 0)
                    temp_diff = -temp_diff;
                if(mini_diff > temp_diff)
                {
                    clostest_sum = temp_sum;
                    mini_diff = temp_diff;
                }
                if(target == temp_sum)
                    return target;
                else if(temp_sum < target)
                    j++;
                else
                    k--;
            }
            
        }
        return clostest_sum;
    }
};

