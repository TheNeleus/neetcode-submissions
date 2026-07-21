class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mojaMapa;

        if (s.length() != t.length()) 
            return false;

        for(char c : s)
        {
            mojaMapa[c]++;
        }

        for(char c : t)
        {
            if(mojaMapa[c] == 0)
                return false;

            mojaMapa[c]--;
        }

        return true;
    }
};
