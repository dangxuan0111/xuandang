class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<pair<int, int>> v;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto i : mp) {
            v.push_back({i.first, i.second});
        }

        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
            return a.second > b.second;
        });

        for(auto i : v) {
            cout << i.first << " " << i.second << endl;
        }

        vector<int> ret;
        while(k > 0) {
            if(v.empty()) break;
            ret.push_back(v.begin()->first);
            v.erase(v.begin());
            k--;
        }
        return ret;
    }
};
