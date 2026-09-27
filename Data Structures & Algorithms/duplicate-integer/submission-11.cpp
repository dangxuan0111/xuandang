class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_map<int, int> mp;

        // for(auto& i : nums) {
        //     mp[i]++;
        // }

        // for(auto& i : mp) if(i.second > 1) return true;

        // return false;

        sort(nums.begin(), nums.end());
        if(nums.size() < 2) return false;
        if(nums.size() == 2) {
            if(nums[0] == nums[1]) return true;
            else return false;
        }

        for(int i = 0; i <= nums.size() - 2; i++)
        {
            if(nums[i] == nums[i+1]) return true;
        }

        return false;
    }
};