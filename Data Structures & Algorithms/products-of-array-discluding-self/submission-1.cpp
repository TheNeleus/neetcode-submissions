class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int total = 1;
        int zeroCount = 0; // za nule(jednu il vise)

        for(int n : nums) {
            if (n != 0) 
                total *= n;
            else 
                zeroCount++;
        }

        if(zeroCount > 1) {
            return vector<int>(nums.size(), 0);
        }

        vector<int> rez;
        for(int n : nums) {
            if (zeroCount == 1) 
                rez.push_back(n == 0 ? total : 0);
            else 
                rez.push_back(total / n);
        }

        return rez;
    }
};
