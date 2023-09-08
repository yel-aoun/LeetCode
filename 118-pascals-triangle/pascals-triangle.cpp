class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        vec.push_back({1});
        for(int i = 1; i < numRows ;i++)
        {
            vector<int> vec_prev = vec.back();
            vector<int> vec_new = {1};
            for(int j = 1; j < vec_prev.size(); j++)
            {
                vec_new.push_back(vec_prev[j - 1] + vec_prev[j]);
            }
            vec_new.push_back(1);
            vec.push_back(vec_new);
        }
        return vec;
    }
};