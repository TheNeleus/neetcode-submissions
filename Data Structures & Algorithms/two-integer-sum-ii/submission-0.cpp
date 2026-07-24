class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while(l < r) {
            int zbir = numbers[l] + numbers[r];
            
            if( zbir < target ) {
                l++;
            }
            else if( zbir > target ) {
                r--;
            }
            else{
                return { l + 1, r + 1 };
            }
        }

        return {};
    }
};
