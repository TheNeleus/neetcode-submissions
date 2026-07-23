class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mojaMapa; // broj, frekv
        for(int n : nums) {
            mojaMapa[n]++;
        }
        
        vector<pair<int, int>> niz; // frekv, broj
        for(const auto& [kljuc, vrednost] : mojaMapa) {
            niz.push_back({vrednost, kljuc});
        }

        sort(niz.begin(), niz.end()); // prvo koji se najredje padaju
                                      // moglo je rbegin
        vector<int> rez;
        int n = niz.size();
        for(int i = 0; i < k; i++) {
            rez.push_back(niz[n - i - 1].second);
        }

        return rez;
    }
};
