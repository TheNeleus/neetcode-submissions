class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> Mapa;  //broj i indeks na kom je
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int razlika = target - nums[i];
            if (Mapa.find(razlika) != Mapa.end()) {
                return {Mapa[razlika], i};
            }    
            Mapa.insert({nums[i], i});
        }

        return {};
    }
};
