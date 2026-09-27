class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size() != t.size()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());  

        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] != t[i]) return false;
        // }
        // return true;

        if(s.size() != t.size()) return false;
        vector<int> count(26, 0);

        for(int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(auto i : count) {
            if(i != 0) return false;
        }
        return true;
    }
};
