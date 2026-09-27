class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> t;

        for(int i = 0; i < nums.size(); i++) {
            t.push_back({nums[i], i});
        }

        sort(t.begin(), t.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.first < b.first;
        });

        int l = 0, r = nums.size() - 1;
        while(l < r) {
            int re = t[l].first + t[r].first;

            if(target - re == 0) return {min(t[l].second, t[r].second), max(t[l].second, t[r].second)};
            else if(target - re < 0) {
                r--;
            } else {
                l++;
            }
        }
        return {};
    }
};
