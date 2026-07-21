class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> Set;
        for (int x : nums) {
            if( Set.find(x) != Set.end() )
                return 1;
            else
                Set.insert(x);
        }
        
        return 0;
    }
};
