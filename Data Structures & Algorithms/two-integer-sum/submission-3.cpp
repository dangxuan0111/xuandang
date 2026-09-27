class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ret;
        // for(int i = 0; i < nums.size(); i++) {
        //     auto it = find(nums.begin(), nums.end(), target - nums[i]);
        //     if((it != nums.end()) && distance(nums.begin(), it) != i) {
        //         ret.push_back(i);
        //         ret.push_back(distance(nums.begin(), it));
        //         sort(ret.begin(), ret.end());
        //         return ret;
        //     }
        // }
        // return ret;

        vector<int> ret;
        vector<pair<int, int>> temp;

        for(int i = 0; i < nums.size(); i++) {
            temp.push_back({i, nums[i]});
        } 

        sort(temp.begin(), temp.end(), [](pair<int, int> a, pair<int, int> b){
            return a.second < b.second;
        });

        for(auto& i : temp) {
            cout << i.first << " " << i.second << endl;
        }

        int l = 0, r = nums.size() - 1;
        while(l < r) {
            if(temp[l].second + temp[r].second == target) {
                ret.push_back(temp[l].first);
                ret.push_back(temp[r].first);
                sort(ret.begin(), ret.end());
                return ret;
            } else if(temp[l].second + temp[r].second > target) {
                r--;
            } else {
                l++;
            }
        }

        return ret;
    }
};
