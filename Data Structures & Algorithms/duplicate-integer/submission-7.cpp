#include <cstring>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for(int i = 0; i < nums.size() - 1; i++) {
        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // return false;

        // sort(nums.begin(), nums.end());
        // if(nums.size() == 0) return false;
        // for(int i = 0; i < nums.size() - 1; i++) {
        //     if(nums[i] == nums[i + 1]) return true;
        // }
        // return false;
        
        // set<int> s;
        // for(auto& i : nums) {
        //     if(s.insert(i).second == false) return true; 
        // }
        // return false;

        // unordered_set<int> s;
        // for(auto& i : nums) {
        //     if(s.insert(i).second == false) return true; 
        // }
        // return false;

        unordered_set<int> s;
        for(auto& i : nums) {
            if(s.count(i)) {
                return true;
            }
            s.insert(i);
        }
        return false;
        
    //    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
        
    }
};