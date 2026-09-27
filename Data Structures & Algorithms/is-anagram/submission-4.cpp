#include <cstring>
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(strcmp(s.c_str(), t.c_str()) == 0) return true;
        return false;
    }
};
