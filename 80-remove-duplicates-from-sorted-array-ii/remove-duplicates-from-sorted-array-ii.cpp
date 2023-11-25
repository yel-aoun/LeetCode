class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int hash[100001] = {0};
        for (int i = 0; i < nums.size(); ++i)
        {
            if (hash[nums[i] + 10000] < 2)
                hash[nums[i] + 10000]++;
            else
            {
                nums.erase(nums.begin() + i);
                --i;
            }
        }
        return nums.size();
    }
};