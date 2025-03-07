/*
1160. Find Words That Can Be Formed by Characters

You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).
Return the sum of lengths of all good strings in words.


Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.


Constraints:

1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
words[i] and chars consist of lowercase English letters.

*/



class Solution {
    public:
        int countCharacters(vector<string>& words, string chars) {

            vector<int> charCount(26, 0);
            for (char& ch : chars) {
                charCount[ch - 'a']++;
            }

            int ans = 0;

            for (string &word : words) {

                vector<int> wordCount(26, 0);
                for (char& ch : word) {
                    wordCount[ch - 'a']++;
                }

                bool ok = true;
                for (int i = 0; i < 26; i++) {
                    if (wordCount[i] > charCount[i]) {
                        ok = false;
                        break;
                    }
                }

                if (ok == true) {
                    ans += word.length();
                }
            }
            return ans;
        }
    };