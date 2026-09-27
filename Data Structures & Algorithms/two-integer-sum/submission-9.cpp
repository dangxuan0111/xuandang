class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int, int> mp;

        // for(int i = 0; i < nums.size(); i++) {
        //     int remain = target - nums[i];

        //     auto it = mp.find(remain);
        //     if(it != mp.end()) {
        //         return {it->second, i};
        //     }

        //     mp[nums[i]] = i;
        // }

        // return {};
        vector<pair<int, int>> v;
        for(int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.first < b.first;
        });

        int l = 0, r = nums.size() - 1;
        while(l < r) {
            int sum = v[l].first + v[r].first;
            if(sum == target) {
                auto ret = minmax(v[l].second, v[r].second);
                return {ret.first, ret.second};
            }
            else if(sum > target) {
                r--;
            } else l++;
        }
        return {};
    }
};
