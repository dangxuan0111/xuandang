class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> mp;

        // for(const auto& s : strs) {
        //     auto t = s;
        //     sort(t.begin(), t.end());
        //     mp[t].emplace_back(s);
        // }

        // vector<vector<string>> ret;

        // for(auto& s : mp) {
        //     ret.emplace_back(s.second);
        // }
        // return ret;

        map<vector<int>, vector<string>> mp;
        for(const auto& s : strs) {
            vector<int> counter(26,0);
            for(int i = 0; i < s.size(); i++) {
                counter[s[i] - 'a']++;
            }
            // string temp;
            // for(const auto& i : counter) {
            //     temp+= std::to_string(i) + '#';
            // }
            // cout << temp << endl;
            mp[counter].emplace_back(s);
        }

        vector<vector<string>> ret;

        for(auto& s : mp) {
            ret.emplace_back(s.second);
        }
        return ret;
    }
};
