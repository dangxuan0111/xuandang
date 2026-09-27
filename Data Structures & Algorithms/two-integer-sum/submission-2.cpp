class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;

        for(int i = 0; i < nums.size(); i++) {
            auto it = find(nums.begin(), nums.end(), target - nums[i]);
            if((it != nums.end()) && distance(nums.begin(), it) != i) {
                ret.push_back(i);
                ret.push_back(distance(nums.begin(), it));
                sort(ret.begin(), ret.end());
                return ret;
            }
        }

        return ret;
    }
};
