class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> mojSet;
        int rez = 0;
        int l = 0;
        int r = 0;

        int n = s.size();
        while(r < n) {
            while(mojSet.contains(s[r])) {
                mojSet.erase(s[l]);
                l++;
            }
            
            mojSet.insert(s[r]);
            rez = max(rez, r - l + 1);
            r++;
        }

        return rez;
    }
};
