class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vowels;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'O') {
                vowels.push(s[i]);
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'O') {
                s[i] = vowels.top();
                vowels.pop();
            }
        }

        return s;
    }
};
