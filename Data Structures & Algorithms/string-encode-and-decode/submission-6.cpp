class Solution {
public:

    string encode(vector<string>& strs) {
        string ret;

        for(const auto& str : strs) {
            ret += to_string(str.size()) + '#' + str;
        }

        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;

        int i = 0;
        while(i < s.size()) {
            int j = i;
            while(s[j] != '#') {
                j++;
            }

            int length = stoi(s.substr(i, j - i));
            cout << "length = " << length << endl;
            
            i = j + 1;
            ret.push_back(s.substr(i, length));
            i += length;
        }
        return ret;
    }
};
