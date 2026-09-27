class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto& s : strs) {
            auto temp = s;
            sort(temp.begin(), temp.end());

            mp[temp].push_back(s);
        }

        vector<vector<string>> ret;
        for(auto& i : mp) {
            ret.push_back(i.second);
        }
        
        return ret;
    }
};
