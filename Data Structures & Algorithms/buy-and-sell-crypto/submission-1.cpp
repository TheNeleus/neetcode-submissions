class Solution {
public:
    int maxProfit(vector<int>& prices) {  // dinamicko programiranje a i preglednije
        int maxRez = 0;
        int minPrice = prices[0];

        for(const auto& p : prices) {
            maxRez = max(maxRez, p - minPrice);
            minPrice = min(minPrice, p);
        }

        return maxRez;
    }
};
