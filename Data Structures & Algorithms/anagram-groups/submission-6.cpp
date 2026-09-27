class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(const auto& s : strs) {
            auto t = s;
            sort(t.begin(), t.end());
            mp[t].emplace_back(s);
        }

        vector<vector<string>> ret;

        for(auto& s : mp) {
            ret.emplace_back(s.second);
        }
        return ret;
    }
};
