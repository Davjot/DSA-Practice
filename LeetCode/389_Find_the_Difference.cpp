class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char, int> m;

        for(auto c : s){
            m[c]++;
        }
        for(auto i : t){
            m[i]--;
        }
        for(auto p : m){
            if(p.second){
                return p.first;
            }
        }
        return t[0];
    }
};
