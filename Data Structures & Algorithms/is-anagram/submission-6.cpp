#include <cstring>
class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if(strcmp(s.c_str(), t.c_str()) == 0) return true;
        // return false;

        if(s.size() != t.size()) return false;

        unordered_map<char, int> ms, mt;
        for(auto& i : s) ms[(char)i]++;
        for(auto& i : t) mt[(char)i]++;

        for(auto& [key, value] : ms) {
            if(value != mt[key]) return false;
        }

        return true;
    }
};
