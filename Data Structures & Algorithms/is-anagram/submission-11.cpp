#include <cstring>
class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // // if(strcmp(s.c_str(), t.c_str()) == 0) return true;
        // // return false;
        // return s == t;

        if(s.size() != t.size()) return false;
        unordered_map<char, int> ms, mt;
        for(int i = 0; i < s.size(); i++) {
            ms[s[i]]++;
            mt[t[i]]++;
        }

        // // for(auto& [key, value] : ms) {
        // //     if(value != mt[key]) return false;
        // // }

        return ms == mt;
        char hts[26], htt[26];

        memset(hts, 0, sizeof(hts));
        memset(htt, 0, sizeof(htt));

        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++) {
            hts[s[i] - 'a']++;
            htt[t[i] - 'a']++;
        }

       for(int i = 0; i < 26; i++) {
            if(hts[i] != htt[i]) return false;
       }
       return true;
    }
};
