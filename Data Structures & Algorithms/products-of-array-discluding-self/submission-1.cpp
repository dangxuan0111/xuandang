class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ret;
        // for(int i = 0; i < nums.size(); i++) {
        //     int mul = 1;
        //     for(int j = 0; j < nums.size(); j++) {
        //         if(i == j) continue;
        //         mul *= nums[j];
        //     }
        //     ret.push_back(mul);
        // }

        // return ret;
        vector<int> res(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++) {
            res[i] = res[i-1] * nums[i - 1];
        }

        int profix = 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            res[i] = res[i] * profix;
            profix *= nums[i];
        }
        return res;
    }
};
