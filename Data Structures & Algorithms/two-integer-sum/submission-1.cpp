class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mojaMapa;  //broj, indeks na kom je
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int razlika = target - nums[i];

            if(mojaMapa.count(razlika))
                return {mojaMapa[razlika], i};

            mojaMapa.insert({nums[i], i});
        }

        return {};
    }
};
