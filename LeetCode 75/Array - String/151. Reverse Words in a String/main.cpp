class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        vector<string> v;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            }
            if ((s[i] == ' ' && temp != "" ) || (i == s.size() - 1 && s[i] != ' ')) {
                v.push_back(temp);
                temp = "";
            }
        }

        temp = "";
        for (int i = v.size() - 1; i >= 0; i--) {
            if (i != 0) {
                temp += v[i] + " ";

            } else {
                temp += v[i];
            }
        }

        return temp;
    }
};
