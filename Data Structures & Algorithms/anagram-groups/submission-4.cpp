class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> temp;

        // for(auto str : strs) {
        //     string sortStr = str;
        //     sort(sortStr.begin(), sortStr.end());
        //     temp[sortStr].push_back(str);
        // }

        // vector<vector<string>>result;
        // for(auto& v : temp) {
        //     result.push_back(v.second);
        // }

        // return result;

        unordered_map<string, vector<string>> res;

        for(const auto& s : strs) {
            vector<int> count(26, 0);
            for(char c: s) {
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }

        vector<vector<string>> ret;
        for(const auto& v : res) {
            ret.push_back(v.second);
        }
        return ret;
    }
};
