class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> Mapa;

        for (const auto& str : strs ){
            vector<int> nizSlova(26,0);
            for (char x : str) {
                nizSlova[x - 'a']++;
            }

            string kljuc = to_string(nizSlova[0]);
            for (int i = 1; i < 26; ++i) {
                kljuc += ',' + to_string(nizSlova[i]);
            }

            Mapa[kljuc].push_back(str);
        }

        vector<vector<string>> rezultat;
        for (const auto& niz : Mapa) {
            rezultat.push_back(niz.second);  // second je value(key,value)
        }

        return rezultat;
    }
};
