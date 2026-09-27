#include <cstring>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_map<int, int> mp;

        // for(auto& i : nums) {
        //     mp[i]++;
        // }

        // for(auto& i : mp) if(i.second > 1) return true;

        // return false;

        // sort(nums.begin(), nums.end());
        // if(nums.size() < 2) return false;
        // if(nums.size() == 2) {
        //     if(nums[0] == nums[1]) return true;
        //     else return false;
        // }

        // for(int i = 0; i <= nums.size() - 2; i++)
        // {
        //     if(nums[i] == nums[i+1]) return true;
        // }

        // return false;
        int arr[20001];
        const int OFFSET = 10000;

        memset(arr, 0, sizeof(int)*20001);

        for(int i = 0; i < nums.size(); i++) {
            arr[nums[i] + OFFSET]++;
        }

        for(int i = 0; i < 20001; i++) {
            if(arr[i] > 1) return true;
        }

        return false;
    }
};