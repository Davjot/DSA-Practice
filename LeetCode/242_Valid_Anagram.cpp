// sorting approach
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; // TC : O(nlogn)
    }
};

// Hash Table approach : TC O(n)
class  Solution{
public:
        bool isAnagram(string s, string t){
        unordered_map <char, int> count;

        // Count the frequency of character in string s
        for(auto x : s){
            count[x]++;
        }

        // decrement the frequency of character in string t
        for(auto x : t){
            count[x]--;
        }

        // check whether if any character has non-zero frequency 
        for(auto x : count){
            if(x.second != 0){
                return false;
            } 
        }    
        return true;
    }
};
