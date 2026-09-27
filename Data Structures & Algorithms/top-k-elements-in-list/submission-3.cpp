class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int, int> mp;
        // for(auto& i : nums) {
        //     mp[i]++;
        // }

        // vector<pair<int, int>> temp;
        // for(auto& i : mp) {
        //     temp.push_back({i.second, i.first});
        // }

        // sort(temp.begin(), temp.end(), [](pair<int, int> a, pair<int, int> b) {
        //     return a.first > b.first;
        // });

        // vector<int> ret;
        // for(int i = 0; i < nums.size() && i < k; i++) {
        //     ret.push_back(temp[i].second);
        // }

        // return ret;
        unordered_map<int, int> mp;
        for(auto& i : nums) {
            mp[i]++;
        }

        vector<pair<int, int>> temp;
        for(auto& i : mp) {
            temp.push_back({i.second, i.first});
        }

        priority_queue<pair<int, int>> pq;
        for(auto& i : mp) {
            pq.push({i.second, i.first});
        }

        vector<int> ret;
        while(k > 0 && !pq.empty()) {
            ret.push_back(pq.top().second); pq.pop(); k--;
        }

        return ret;
    }
};
