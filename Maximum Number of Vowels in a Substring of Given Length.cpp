 Maximum Number of Vowels in a Substring of Given Length solution 
 class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt = 0;
        unordered_map<char, int> vowelCounts = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};
        
        for(int i = 0; i < k && i < s.size(); i++) {
            if(vowelCounts.count(s[i])) {
                vowelCounts[s[i]]++;
                cnt++;
            }
        }
        
        int ans = cnt;
        for(int i = 1; i <= s.size() - k; i++) {
            if(vowelCounts.count(s[i - 1])) {
                vowelCounts[s[i - 1]]--;
                cnt--;
            }
            if(vowelCounts.count(s[i + k - 1])) {
                vowelCounts[s[i + k - 1]]++;
                cnt++;
            }
            ans = max(ans, cnt);
        }
        
        return ans;
    }
};
using hash-map simply count
