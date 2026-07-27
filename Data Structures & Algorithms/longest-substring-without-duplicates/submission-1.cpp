class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // pamtimo poslednje indekse, 256 zbog ascii
        vector<int> pozicije(256, -1); // bila bi bolja mapa da nije ascii
        
        int rez = 0;
        int l = 0;
        int r = 0;

        int n = s.size();
        while(r < n) {
            char trenutnoSlovo = s[r];

            if (pozicije[trenutnoSlovo] != -1) {
                // nema vracanja nazaad
                l = max(l, pozicije[trenutnoSlovo] + 1);
            }

            pozicije[trenutnoSlovo] = r;
            rez = max(rez, r - l + 1);

            r++;
        }

        return rez;
    }
};