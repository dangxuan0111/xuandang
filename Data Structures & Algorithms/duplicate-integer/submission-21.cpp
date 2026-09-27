class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // if(nums.size() <= 1) return false;
        // std::sort(nums.begin(), nums.end());


        // for(int i = 0; i < (nums.size() - 1); i++) {
        //     if(nums[i] == nums[i + 1]) return true;
        // }

        // return false;
        std::unordered_map<int, int> mp;

        for(auto& i : nums) {
            mp[i]++;
        }

        for(auto& i : mp) {
            if(i.second > 1)  return true;
        }
        return false;
    }
};