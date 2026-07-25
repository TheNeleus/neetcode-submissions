class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> rez;

        for(int i = 0; i < nums.size() - 2; i++) {

            if(nums[i] > 0) // najmanji ne sme biti pozitivan(sortiran)
                break;
            if(i > 0 && nums[i] == nums[i-1]) // ako smo prosli neki broj vec, preskacemo
                continue;
            
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r) {
                int zbir = nums[i] + nums[l] + nums[r];
                if (zbir > 0) {
                    r--;
                } else if (zbir < 0) {
                    l++;
                } else {
                    rez.push_back({nums[i], nums[l], nums[r]});

                    l++;
                    r--; // mozemo oba jer preskacemo duplikate

                    // mora provera i za l i r da nema duplikata
                    while(l < r && nums[l] == nums[l - 1]) { 
                        l++;
                    }
                    while(l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                }
            }
        }

        return rez;
    }
};
