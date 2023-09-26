class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size() - 1;
        int i = 0;
        int result = 0;
        while (i < j)
        {
            int tmp2 = min(height[i], height[j]);
            int dst = j - i;
            int tmp = dst * tmp2;
            result = max(result, tmp);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return (result);
    }
};