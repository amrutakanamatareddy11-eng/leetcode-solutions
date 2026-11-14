class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string s = "";

        solve(0, digits, s, ans, mp);

        return ans;
    }

    void solve(int index, string digits, string s,
               vector<string>& ans, vector<string>& mp) {

        if (index == digits.size()) {
            ans.push_back(s);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for (char ch : letters) {
            s.push_back(ch);

            solve(index + 1, digits, s, ans, mp);

            s.pop_back();
        }
    }
};