class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mojaMapa; // broj, frekv
        vector<vector<int>> niz(nums.size() + 1); // za svaku frekv pamtimo niz brojeva te frekv

        for(int n : nums) {
            mojaMapa[n] += 1;
        }

        for(const auto& [kljuc, vrednost] : mojaMapa) {
            niz[vrednost].push_back(kljuc);
        }

        vector<int> rez;
        for(int i = niz.size() - 1; i > 0; i--) {
            for(int n : niz[i]) {
                rez.push_back(n);
                if(rez.size() == k) {
                    return rez;
                }
            }
        }

        return rez;
    }
};
