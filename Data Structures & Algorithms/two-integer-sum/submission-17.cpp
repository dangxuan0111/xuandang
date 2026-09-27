class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> temp;

        for(int i = 0; i < nums.size(); i++) {
            temp.emplace_back(nums[i], i);
        }

        sort(temp.begin(), temp.end(), [](pair<int, int> a, pair<int, int> b){
            return a.first < b.first;
        });

        int l = 0, r = temp.size() - 1;

        while(l < r) {
            auto sum = temp[l].first + temp[r].first;

            if(sum == target) {
                return {min(temp[l].second, temp[r].second), max(temp[l].second, temp[r].second)};
            } else if(sum > target) {
                r--;
            } else {
                l++;
            }
        }
        return {};
    }
};
