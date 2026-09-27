#include <string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string ret; 
        for(auto& s : strs) {
            ret += to_string(s.size()) + '#' + s;
        }
        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;

        int idx = 0;        
        while(idx < s.size()) {
            int sharpPos = s.find('#', idx);
            if(sharpPos == string::npos) break;
            int length = stoi(s.substr(idx, sharpPos - idx));
            idx = sharpPos + 1;
            ret.push_back(s.substr(idx, length));
            idx += length;
        }
        return ret;
    }
};
