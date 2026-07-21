class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> Mapa;

        for( char x : s ) {
            if ( Mapa.find(x) == Mapa.end() )
                Mapa[x] = 1;
            else
                Mapa[x]++;
        }

        for( char x : t ) {
            if ( Mapa.find(x) == Mapa.end() )
                return 0;
            else {
                Mapa[x]--;
                if ( Mapa[x] == 0)
                    Mapa.erase(x);
            }
        }
        
        return !Mapa.size();
    }
};
