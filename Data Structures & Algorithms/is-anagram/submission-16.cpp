class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;
        
        // int counter[26];

        // if(s.size() != t.size()) return false;

        // for(int i = 0; i < t.size(); i++) {
        //     counter[s[i] - 'a']++;
        //     counter[t[i] - 'a']--;
        // }

        // for(int i = 0; i < 26; i++) {
        //     if(counter[i] > 0) return false;
        // }
        // return true;
        std::unordered_map<char, int> ms, mt;

        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); i++) {
            ms[s[i]]++;
            mt[t[i]]++;
        }

        for(auto& i : ms) {
            if(i.second != mt[i.first]) return false;
        }

        return true;
    }
};
