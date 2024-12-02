//49. Group Anagrams

class Solution {
public:
    string generate(string& word) {
        int arr[26] = {0};

        for (char& ch : word) {
            arr[ch - 'a']++;
        }

        string newWord = " ";
        for (int i = 0; i < 26; i++) {
            int frq = arr[i];

            if (frq > 0) {
                newWord += string(frq, i + 'a');
            }
        }
        return newWord;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {
            string word = strs[i];

            string newWord = generate(word);
            mp[newWord].push_back(word);
        }
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
